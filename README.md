# Push_swap

![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/push_swap.gif)

## Overview

This project is about sorting data. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks. The final goal is to sort the data in ascending order with the lowest possible number of instructions.

## Key Features

The project is composed of two programs `push_swap` in `Mandatory` part and `checker` in `Bonus` part.
- `push_swap` which we need to calculates and displays on the standard output the smallest list of instructions possible to sort the integer arguments received.
- `checker` it's a program that takes integer arguments and reads instructions on the standard output. Once read, checker executes them and displays OK if integers are sorted. Otherwise, it will display KO or Error if the integers are not sorted or the instructions are not well formatted.

## Getting Started

to start using the project, you need to clone the repository and run the following commands:

```
git clone https://github.com/whoismtrx/42_push_swap.git push_swap
cd push_swap
make
```

## Usage

### push_swap

```
./push_swap 4 67 3 87 23
or
./push_swap "4 67 3 87 23"
or
arg="4 67 3 87 23" | ./push_swap $arg
```

### checker

```
./checker 4 67 3 87 23
pb
ra
pb
ra
sb
pa
pa
OK
```

## Rules

- You should take arguments as a list of integers and nothing else.
- The program should not crash, even in case of error.
- You need to sort 3 numbers in less than 3 operations, 5 numbers in less than 12 operations and 100 numbers in less than 700 operations and 500 numbers in less than 5500 operations in case if you want to get 100/100.
- The project is composed of 2 stacks named `A` and `B` and you can't use any other stack while sorting.
- The sorting algorithm should be implemented with the instructions below:
  - `sa`: swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
  - `sb`: swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
  - `ss`: sa and sb at the same time.
  - `pa`: push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  - `pb`: push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  - `ra`: rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
  - `rb`: rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
  - `rr`: ra and rb at the same time.
  - `rra`: reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
  - `rrb`: reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
  - `rrr`: rra and rrb at the same time.

## Implementation

I think the first thing we need to care about is the `data structure` we gonna use. since `stack` doesn't implemented in the C standard library, we need to implement it by ourselves. we can use `Arrays` to implement it. we can also use `Linked Lists` but the best way to implement it specially for this project is to use `Circular Doubly Linked Lists`. because we can easily implement all operations with O(1) time complexity. The next thing we need to do, is to implement the `instructions` we gonna use to manipulate the stack. I'm not gonna dive deep into the implementation of the stack and the instructions because it's a basic thing and you can find a lot of resources on the internet to implement it so I'm considering that you already implemented it. After all, we can start to implement the sorting algorithm.

### First Step

The first thing we need to do is to find the best `algorithm` to sort the stack with the lowest number of operations. let's check the size of the stack, if less or equal to 5, you can sort it with any basic algorithm you can think of. if more than 5, we can move to the next step.

### Second Step

To arrange the elements in the stack from smallest to largest, we need to assign each element a specific position. This process, known as `indexing`, helps us understand the order of the elements within the stack and the corresponding `chunk` they belong to. We can simplify the indexing step by incorporating it while adding elements to the stack.
Let's assume we start with a `0-based indexing` system. When we push the first element onto the stack, we assign it an index of 0. As we proceed to push the second element, we compare its value with the first element. If the second element is smaller, we increase the index of the first element, while the second element retains an index of 0. On the other hand, if the second element is larger, we only increment its index, leaving the index of the first element unchanged. This process continues for all elements, ensuring that each one is assigned an index ranging from 0 to n-1. This indexed order helps maintain consistency and clarity within the stack.

```
  if node->value > head->value
    node->index++
  else
    head->index++
  current = head->next
  while current->next != head
    if node->value > current->value
      node->index++
    else
      current->index++
    current = current->next
```

### Third Step

After we have all the elements indexed, we need to divide the stack into chunks. the best way to do this is to divide the stack into 3 chunks, and the first chunk it's the only one we gonna care about. So the first chunk will contain the first 1/3 of the elements, that means all the elements from `0 to (sizeof(stack A)/3)-1`. and all those elements will be push to the secend stack `B`.

`The elements with blue color it's our chunk.`
![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/step3.gif)


### Fourth Step

As we seen in the previous step, we have a chunk of size `sizeof(stack A)/3`, we can notice that the size of stack `A` it's gonna change after we push the elements to the stack `B`, so we need to store this value in a variable let's call it `Pivot_One`, also because we need our algorithm to be more optimized, we need another variable we can name it `Pivot_Two` to store the half size of `Pivot_One`, so for know we have:
```
  Pivot_One = sizeof(stack A)/3
  Pivot_Two = Pivot_One/2
```
I know you are asking yourself why we need `Pivot_Two`? where going to figuer it out in the next steps.

### Fifth Step

Now we decided the `chunk` we gonna care about, we have `Pivot_one` and `Pivot_Two` what nexts? we need set some conditions to know when we need to push an element to the stack `B` or rotate the stack `A`, we need another condition to know when we need to rotate the stack `B` after we push an element to it or not. Also because we have a `Circular Doubly Linked List` we need a condition to break the `loop` or we are going to have an infinite loop, we need a `Counter` to keep counting the number of elements we pushed to stack `B` to reinisialize the `Pivot_One` and `Pivot_Two` after we finish the first chunk. so let's set the conditions:
```
while sizeof(stack A) > 5
  if top B index is <= Pivot_Two && size of stack B > 1
    rotate the stack B
  if top A index is <= Pivot_One
    push the element to stack B
    increment the Counter
  else
    rotate the stack A
  if Counter >= Pivot_One
    reinisialize the Pivot_One and Pivot_Two
    reinisialize the Counter
```

`Our chunk after we push the elements to the stack B.`
![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/step5_1.gif)

keep in mind that we have a bunch of ways to implement those conditions, so you can implement them as you want. the most important thing is to know how to implement them on the right way to get the best results. after we finish this step, the `counter` will be equal to `Pivot_One`. so we know that we pushed all the elements from the first chunk to the stack `B`. to avoid the infinite loop, we need reinitialize the `Pivot_One` and `Pivot_Two` to get the next chunk. we can back to the `Step 3` and repeat the process until we push all the elements to the stack `B` exept the lagest 5 elements.

`Stack A after we push the elements to the stack B.`
![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/step5_2.gif)

### Sixth Step

Now we have all the elements pushed to the stack `B` exept the largest 5 elements, we can call the `Basic algorithm` to sort the stack `A`. After that, were going to the next step.

### Seventh Step

The Seventh step is the last one, we need to get back all the elements from the stack `B` to the stack `A` in the right order. we can do this by pushing the elements from the stack `B` to the stack `A` while we are checking the index of the elements, we gonna push the elements to the right position so basically the element with the `top A index - 1` but if we keep looking for it in the stack with `rotating`, the number of operations will be so high, so to optimize this step we can push the elements to stack `A` even if not in the right position and we can keep them in the bottom of the stack `A` till we find the right position for them. also we need a variable to store the `index` of the element we keep in the bottom. so let's set the conditions:
```
while sizeof(stack B) > 0
  lastIndex = 0
  if bottom A index < top A index
    lastIndex = bottom A index
  if find top A index - 1 in B < sizeof(stack B)
    while top B index != top A index - 1
      if top B index > lastIndex
        push top B to A
        rotate the stack A
      else
        rotate the stack B
    push top B to A
  else
    while top B index != top A index - 1
      reverse rotate the stack B
    push top B to A
  while lastIndex == top A index - 1
    reverse rotate the stack A
    lastIndex = bottom A index
```

`this is how we get back the elements from the stack B to the stack A in the right position.
`

![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/step7.gif)

After we finish this step, we gonna have all the elements sorted in the stack `A` and we can print the instructions to the standard output.

### Clarifications

- firstly, don't look at my code as a solution, it's implemented 2 years ago and I'm sure it's not the best solution. I'm just trying to give you an idea about how you can implement the project in the right way.
- secondly, in the previous steps, I try to write some psoeudo code to help you understand the idea, there's a lot of way to implement the conditions and the instructions, so you can implement them as you want.
- thirdly, let's discuss the importance of the `Pivot_two` and the decision it makes about `rotating` the stack B. But why is this necessary? Let's consider what would happen if we didn't include it in our algorithm.
If we implemented our algorithm without considering the `Pivot_two` decision, we would simply push all the elements from the first chunk onto stack `B` without performing any `rotations`. However, when we eventually need to transfer these elements back from stack `B` to stack `A`, we would encounter a problem. Since we didn't `rotate` stack `B` during the process, the elements would not be in the desired order.
As a result, we would need to perform multiple rotations to rearrange the elements correctly. This is because some elements on stack `B` would have `indexes` lower than the ones we want to push onto stack `A`. These `extra rotations` would significantly `increase the number of operations required`, making the `algorithm less efficient`.

  `this is how our algorithm gonna work without Pivot_Two.`

  ![](https://github.com/whoismtrx/42_push_swap/blob/main/gifs/notaStep.gif)
  
  So to avoid this issue, we introduce the `Pivot_two` decision to determine when and how to rotate stack `B`, ensuring that the elements are in the desired order before transferring them back to stack `A`.

- least but not last, i have a big thanks to my friend [Nx21](https://github.com/Nx21) for helping me to improve and optimize the algorithm. i wanna thank you for reading this article, I hope it helps you to understand the project and how you can implement it in the right way. if you have any question or you need help, feel free to ask me on my email `orekab3@gmail.com`, and I will be happy to help you. also if you have any suggestion to improve the article or optimize the algorithm, please let me know.

## Resources

- [Understanding the Stack Data Structure](https://medium.com/@noransaber685/understanding-the-stack-data-structure-in-c-introduction-implementation-and-examples-8d3fb03de809)
- [Circular Doubly Linked Lists](https://www.youtube.com/watch?v=1kjIu__pWTw)
- [Push_Swap Visualizer](https://github.com/anolivei/Push_swap42)
- [Push_Swap Tester](https://github.com/LeoFu9487/push_swap_tester)




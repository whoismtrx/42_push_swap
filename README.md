# Push_swap

## Overview

This project is about sorting data. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks. The final goal is to sort the data in ascending order with the lowest possible number of instructions.

## Key Features

The project is composed of two programs so thats means contains 2 parts: `Mandatory` and `Bonus`.
- `push_swap` is the `Mandatory` part which we need to calculates and displays on the standard output the smallest list of instructions possible to sort the integer arguments received.
- `checker` is the `Bonus` part which we need to takes integer arguments and reads instructions on the standard output. Once read, checker executes them and displays OK if integers are sorted. Otherwise, it will display KO.

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
- The project is composed of 2 stacks named `a` and `b` and you can't use any other stack while sorting.
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

I think the first thing we need to care about is the `data structure` we gonna use. since `stack` doesn't implemented in the C standard library, we need to implement it by ourselves. we can use `Arrays` to implement it. we can also use `Linked Lists` but the best way to implement it specially for this project is to use `Doubly Circular Linked Lists`. because we can easily implement all operations with O(1) time complexity. The next thing we need to do, is to implement the `instructions` we gonna use to manipulate the stack. I'm not gonna dive deep into the implementation of the stack and the instructions because it's a basic thing and you can find a lot of resources on the internet to implement it so I'm considering that you already implemented it. After all, we can start to implement the sorting algorithm.

### First Step

The first thing we need to do is to find the best `algorithm` to sort the stack with the lowest number of operations. let's check the size of the stack, if less or equal to 5, you can sort it with any basic algorithm you can think of. if more than 5, we can move to the next step.

### Second Step

You need to `index` all the elements in the stack from the smallest to the largest. `0 to n-1` or `1 to n` this doesn't matter. what important here is to know every element's `position` in the stack and the `chunk` where it belongs, and that's why we need to index them. for less complexity, you can do this step while pushing the elements to the stack. let's say we gonna use `0 indexing`. the first element pushed to the stack will be indexed as 0, the second element will be also indexed as 0 but when we gonna traverse the stack to push the second element, we gonna check the value of the second element with the first element, if the second element is less than the first element, in this case we need to increment the index of the first element and the second element will still be indexed as 0. if the second element is greater than the first element, in this case we need to increment the index of the second element and keep the index of the first element as it is. and so on with all the elements. after this step, we gonna have all the elements indexed from 0 to n-1.

### Third Step

After we have all the elements indexed, we need to divide the stack into chunks. the best way to do this is to divide the stack into 3 chunks, and the first chunk it's the only one we gonna care about. So the first chunk will contain the first 1/3 of the elements, that means all the elements from `0 to (sizeof(stack A)/3)-1`. and all those elements will be push to the secend stack `B`.

### Fourth Step

As we seen in the previous step, we have a chunk of size `sizeof(stack A)/3`, we can notice that the size of stack `A` it's gonna change after we push the elements to the stack `B`, so we need to store this value in a variable let's call it `Pivot_One`, also because we need our algorithm to be more optimized, we need another variable we can name it `Pivot_Two` to store the half size of `Pivot_One`, so for know we have:
- `Pivot_One = sizeof(stack A)/3`
- `Pivot_Two = Pivot_One/2`

I know you are asking yourself why we need `Pivot_Two`? where going to figuer it out in the next steps.

### Fifth Step

Now we decided the `chunk` we gonna care about, we have `Pivot_one` and `Pivot_Two` what nexts? we need set some conditions to know when we need to push an element to the stack `B` or rotate the stack `A`, we need another condition to know when we need to rotate the stack `B` after we push an element to it or not. Also because we have a `Doubly Circular Linked List` we need a condition to break the `loop` or we are going to have an infinite loop, we need a `Counter` to keep counting the number of elements we pushed to stack `B` to reinisialize the `Pivot_One` and `Pivot_Two` after we finish the first chunk. so let's set the conditions:
- while
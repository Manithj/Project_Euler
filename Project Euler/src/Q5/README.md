# Question

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

## Answer

- Initialize a variable `i` to 21, which is the first number that is not checked by the divisibility conditions in the for loop.
- Start a for loop that iterates over all positive integers greater than or equal to `i` until a number is found that meets the following conditions:
  It is evenly divisible by 1 through 20.
  It breaks out of the for loop.
- Return the smallest positive number that meets the conditions in step 2.

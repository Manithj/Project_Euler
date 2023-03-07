# Question

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
## Answer

- The program defines a function `seq_length` that takes in a single argument `n`, which is a long integer, and returns an integer representing the length of the Collatz sequence for that number.

- The function initializes `length` to 1.

- Within the loop, the function checks if `n` is even (i.e., if it has no remainder when divided by 2). If it is, the function sets n to n / 2. If it is odd, the function sets n to 3 * n + 1.

- The program defines a function `collatz` that takes no arguments and returns an integer representing the starting number that produces the longest Collatz sequence.
The function initializes two variables: `longestStartNum` to 1 and `longestSeqLength` to 1.

- The function enters a loop that iterates over all numbers from 1 to 999,999.

- Within the loop, the function calculates the length of the Collatz sequence for the current number using the seq_length function.

- If the length of the sequence is longer than the previous longest, the function updates `longestSeqLength` to the new length and `longestStartNum` to the current number.
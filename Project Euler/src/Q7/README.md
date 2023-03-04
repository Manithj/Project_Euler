# Question

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

## Answer

- The 'isPrime' function checks if the number is 2 or 3, since these are prime numbers. If the number is 1 or even, it returns false. Otherwise, it checks odd numbers up to the square root of the input number to see if it is divisible by any of them. If it is, it returns false. If it is not, it returns true.
- The 'prime' function enters a while loop that continues until the counter variable is equal to 10,001, that calls the isPrime function to check if the number is prime.
- If it is, the counter variable is incremented by 1. The number variable is then incremented by 2 to move to the next odd number.

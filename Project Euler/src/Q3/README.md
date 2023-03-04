# Question

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

## Answer

- While value is divisible by 2, divide value by 2 and update maxPrimeNumber to 2.
- Use a for loop to iterate over odd integers from 3 up to the square root of the value.
- While the value is divisible by the current integer i, divide value by i and update maxPrimeNumber to i.
- If value is greater than 2, update maxPrimeNumber to value.

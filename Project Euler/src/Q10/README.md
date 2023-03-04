# Question

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

## Answer

- Define a function called `isPrimee` that takes an integer n as input and returns a boolean value indicating whether n is a prime number or not.
- Inside the `primeSum` function, define a variable called `sum` and initialize it to 0.
- Use a loop to iterate through all numbers from 2 to 2000000;Inside the loop, use the `isPrimee` function to check if the current number is prime.
- If the current number is prime, add it to the `sum`.

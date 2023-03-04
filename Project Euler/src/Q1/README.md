# Question 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

## Answer

- First initialize the variable sum to zero.
- Then we use a for loop to iterate through all the natural numbers from 1 to 999.
- Inside the loop, we use the modulus operator to check if the current number i is divisible by 3 or 5. If it is, we add it to the sum.

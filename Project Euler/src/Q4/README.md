# Question

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

## Answer

### step 01

- Define a function called isPalindrome that takes an integer argument n.
- Create a temporary variable called temp and set its value to n.
- Create a new integer variable called rev and set its initial value to 0. This variable will hold the reversed digits of n.
- Enter a while loop that continues as long as temp is greater than 0. This loop will reverse the digits of temp.
- Within the while loop, calculate the remainder of temp divided by 10. This will give you the last digit of temp.
- Multiply rev by 10 to shift its digits to the left.
- Add the last digit of temp to rev.
- Divide temp by 10 to remove the last digit.
- After the while loop completes, compare rev with the original value of n.

### step 02

- Define a function called largestPalindrome.
- Create a variable called largest and initialize it to 0. This variable will hold the largest palindrome found.
- Enter a nested for loop that iterates through all possible pairs of 3-digit numbers. The outer loop iterates through numbers from 100 to 999, and the inner loop iterates through numbers from the current value of the outer loop variable to 999.
- For each pair of numbers, calculate their product and store it in a variable called product.
- Check if product is a palindrome by calling the isPalindrome function. If product is a palindrome and is larger than the current value of largest, update the value of largest to product.
- After the loops complete, return the value of largest.

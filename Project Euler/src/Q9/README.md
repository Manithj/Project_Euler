# Question

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

## Answer

- `for (a = 1; a < 1000; a++)` This is a for loop that starts with a equal to 1 and increments a by 1 at each iteration until a is less than 1000.
- `for (b = a + 1; b < 1000; b++)` This is a nested for loop that starts with b equal to `a + 1` and increments `b` by 1 at each iteration until `b` is less than 1000. The nested loop is necessary because b needs to be greater than a in order to satisfy the Pythagorean theorem.
- `c = 1000 - a - b;` This calculates the value of c using the Pythagorean theorem. c is the third side of the right triangle.
- `if (a * a + b * b == c * c)` This checks if a, b, and c form a Pythagorean triplet. If the condition is true, the code inside the if block is executed.

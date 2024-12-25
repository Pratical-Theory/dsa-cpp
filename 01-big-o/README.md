# Big O

## What is it?

It is a way to mathematically compare different codes.

### Time complexity

- The number of operations it takes to complete something.

### Space complexity

- The memory space it takes to complete something.

### Symbols

- Ω (omega): best case
- Θ (theta): average case
- O (omicron): worst case

Big O is always the worst case, but if someone asks for the average or best case, they are referring to theta or omega.

## Rules

### Always drop constants, n + n = 2n = O(n)

In this addition of n + n, which equals 2n, we drop constants (2), so our final result is O(n).

### Drop non-dominants, n^2 + n = n^2 + n = O(n^2)

In the case of n^2 + n, since n^2 is dominant, we drop the non-dominant term (n), resulting in O(n^2).

### Different terms for inputs, a + b = a + b = O(a + b)

For two loops with different sizes, loop a has 100 iterations and loop b has 500. This is not equal to 2n but to a + b, resulting in O(a + b).

## Most common O notations

### O(n) - proportional
Linear time complexity, where the runtime grows linearly with the input size.

### O(n^2) - loop within a loop
Quadratic time complexity, where the runtime grows proportionally to the square of the input size.

### O(1) - contstant
Constant time complexity, where the runtime is independent of the input size.

### O(log n) - divide and conquer
Cuts the problem size in half each step. For example, log base 2 of 1,073,741,824 is 31, meaning we cut in half 31 times to find the desired number.

### O(n log n) - efficient sorting
Common in efficient sorting algorithms like merge sort and quick sort when the data is not ordered.
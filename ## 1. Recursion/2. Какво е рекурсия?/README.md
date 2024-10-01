# What is Recursion?

## Overview

This document provides an introduction to the concept of recursion in computer science. Recursion is a powerful method where the solution to a problem depends on the solutions to smaller instances of the same problem.

## Key Concepts

### Definition of Recursion

Recursion is a technique where a function calls itself to solve smaller subproblems until it reaches a **base case**. The base case is essential to avoid infinite loops and to define when the recursion should stop.

### Importance of Recursion

- **Central to Computer Science**: Recursion is a fundamental concept that applies to many data structures and algorithms.
- **Alternatives**: Every problem can be solved using either iteration or recursion. Understanding one method can often lead to insights about the other.

### Example: Summing the First N Integers

1. **Iterative Approach**:
   - Initialize a result variable to zero.
   - Iterate from 1 to N, adding each number to the result.
   - Return the result.

2. **Recursive Approach**:
   - Define a function that sums the first N integers.
   - If N equals zero, return zero (base case).
   - Otherwise, return \( N + \) the result of calling the function with \( N - 1 \).

### Types of Recursion

1. **Tail Recursion**:
   - The recursive call is the last operation in the function.
   - It behaves similarly to loops (like `for` or `while`).

   ```cpp
   void tailRecursion(int n) {
       if (n == 0) return;
       std::cout << n << std::endl; 
       tailRecursion(n - 1);
   }

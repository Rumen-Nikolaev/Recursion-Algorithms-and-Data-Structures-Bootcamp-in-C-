# Tower of Hanoi Solver

This program solves the **Tower of Hanoi** problem for a given number of disks using a recursive algorithm. The Tower of Hanoi is a classic mathematical puzzle where the objective is to move all disks from one rod to another, following certain rules.

## Problem Overview

The Tower of Hanoi problem involves three rods (A, B, C) and a number of disks of different sizes. The goal is to move all disks from the **source rod** to the **destination rod**, following these rules:
1. Only one disk can be moved at a time.
2. A disk can only be moved to a rod if it is smaller than the top disk on that rod.
3. Disks must be moved using an **auxiliary rod** to assist.

### Example

For 2 disks, the sequence of moves is as follows:

1. Move the smaller disk (Disk 0) from **A** to **B**.
2. Move the larger disk (Disk 1) from **A** to **C**.
3. Move the smaller disk (Disk 0) from **B** to **C**.

## Code Explanation

- The `solve` function is a recursive function that takes four arguments:
  - `disk`: the number of disks to move.
  - `source`: the rod from which the disk is moved.
  - `middle`: the auxiliary rod used for temporary storage.
  - `destination`: the rod to which the disk is moved.
  
- The recursion breaks down the problem into smaller subproblems:
  - First, it moves `n-1` disks from the source rod to the middle rod.
  - Then, it moves the nth disk from the source rod to the destination rod.
  - Finally, it moves the `n-1` disks from the middle rod to the destination rod.

- The base case occurs when there is only one disk (`disk == 0`), which is moved directly to the destination rod.

## How to Run the Program

1. Compile the program using a C++ compiler:

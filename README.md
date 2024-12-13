# Modifying a String Literal in C

This repository demonstrates a common error in C programming: attempting to modify a string literal. String literals, such as "Hello" in the example, are typically stored in read-only memory.  Attempting to modify them results in undefined behavior, which can lead to crashes or unexpected results.  The solution shows how to correctly modify strings by allocating memory dynamically.

## Bug:
The `bug.c` file contains the buggy code.  It attempts to change the first character of the string literal "Hello".

## Solution:
The `bugSolution.c` file demonstrates the corrected approach.  It allocates memory dynamically using `malloc` to create a modifiable string copy.
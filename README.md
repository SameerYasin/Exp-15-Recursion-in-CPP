# Exp-15-Recursion-in-CPP

# RECURSION IN CPP
## Aim: To study and implement Recursion.

### Tools Used: VS Code or Programiz online compiler.

## Theory:
## Recursion in Cpp
Recursion in C++ is a process where a function calls itself directly or indirectly to solve a problem. It works by breaking a large problem into smaller subproblems of the same type. Every recursive function must have a base case to stop the recursion and prevent infinite loops. The function keeps calling itself until the base case is reached, after which it starts returning values back through the call stack. Recursion is often used in problems like factorial, Fibonacci series, tree traversals, and backtracking. However, it can be memory-intensive due to multiple function calls stored in the stack.

#include <iostream>
using namespace std;

// Recursive function template
return_type function_name(parameters) {
    // Base case (stopping condition)
    if (/* condition to stop recursion */) {
        return /* some value */;
    }

    // Recursive case (function calls itself with smaller input)
    return /* expression involving function_name(modified parameters) */;
    
}

int main() {
    // Example call to recursive function
    cout << function_name(/* arguments */);
    return 0;
}


# Key Points:-

1. Function calls itself – A recursive function directly or indirectly calls itself.
2. Base Case – Essential stopping condition to end recursion and avoid infinite calls.
3. Recursive Case – The part where the function calls itself with a smaller/simpler input.
4. Call Stack – Each function call is stored in the stack until the base case is reached, then results are returned back.
5. Types of Recursion – Direct recursion (function calls itself) and indirect recursion (function A calls B, which calls A again).
6. Applications – Commonly used in factorial, Fibonacci, sorting (QuickSort, MergeSort), searching (binary search), and tree/graph traversals.
7. Limitations – Can cause high memory usage and stack overflow if the base case is missing or recursion is too deep.

## Program-1: Factorial of a Number
This program calculates the factorial of a number using recursion in C++. The function fact(int n) calls itself repeatedly with a smaller value of n until it reaches the base case. The base case here is when n is 0 (or less), where the function returns 1. For positive values, it returns n * fact(n-1), building the factorial step by step. The main() function takes user input and prints the factorial. This demonstrates how recursion simplifies solving problems by breaking them into smaller subproblems.


### **Algorithm: Factorial of a Number**

1. **Start** the program.
2. **Input** a number `n` from the user.
3. **Define** a recursive function `fact(n)`:

   * **If** `n <= 0`, **return** 1 (**base case**).
   * **Else**, **return** `n * fact(n - 1)` (**recursive case**).
4. **Call** the function `fact(n)` from `main()` and store the result.
5. **Display** the factorial of the entered number.
6. **End** the program.


### **Algorithm: Sum of First *n* Natural Numbers**

1. **Start** the program.
2. **Input** a number `n` from the user.
3. **Define** a recursive function `add(n)`:

   * **If** `n == 0`, **return** 0 (**base case**).
   * **Else**, **return** `n + add(n - 1)` (**recursive case**).
4. **Call** the function `add(n)` from `main()` and store the result.
5. **Display** the sum of the first `n` natural numbers.
6. **End** the program.


### **Algorithm: Reverse a String**

1. **Start** the program.
2. **Input** a string from the user.
3. **Define** a recursive function `revstr(char *str)`:

   * **If** the current character `*str` is the null character (`'\0'`), **return** (**base case**).
   * **Else**, **call** `revstr(str + 1)` to move to the next character (**recursive case**).
   * **After** returning from the recursive call, **print** the current character `*str`.
4. **Call** the function `revstr(&str[0])` from `main()`.
5. **Display** the reversed string.
6. **End** the program.


## Conclusion
All three programs demonstrate the power and utility of recursion in C++. Recursion allows a function to solve a problem by breaking it into smaller subproblems and using the call stack to return results. The factorial and sum programs show how recursion can replace iterative loops for mathematical calculations, while the string reversal program illustrates how recursion can process data in reverse order. Each program emphasizes the importance of a base case to terminate recursion and prevent infinite calls. Overall, recursion provides a clean and elegant way to solve problems, although it may use more memory due to multiple function calls.

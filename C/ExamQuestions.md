# 1. What is the structure of a C program?
The structure of a C program is organized in a specific sequence to ensure proper compilation and execution.

## 1. Preprocessor Directives
These are instructions to the compiler to preprocess the code before compilation begins. Common examples include:

```c 
#include <stdio.h>   // Standard Input Output header
#define PI 3.14      // Macro definition
```

## 2. Global Declarations
These include variable declarations, constants, and function prototypes that are available throughout the program.

```c
int globalVar = 10;         // Global variable
void displayMessage(void);  // Function prototype
```

## 3. main() Function
The entry point of every C program. Execution starts from the main function.

```c
int main() {
    // Code statements
    return 0;
}
```

## 4. Function Definitions
These contain reusable blocks of code. If functions are defined after main, their prototypes should be declared earlier.

```c
void displayMessage(void) {
    printf("Hello, World!\n");
}
```


### example:

```c 
#include <stdio.h>            // Preprocessor directive

// Global declarations
int globalCount = 0;         
void greet(void);            // Function prototype

int main() {
    greet();                 // Function call
    return 0;                // Exit status
}

// Function definition
void greet(void) {
    printf("Hello from the greet function!\n");
}
```

<br><br><br>

# 2. Define keywords, identifiers, constants, and variables with examples.

## Keywords
**Keywords** are reserved words in C that have predefined meanings. These cannot be used as variable names or function names.

### 🧾 Examples: `int`, `float`, `return`, `if`, `else`, `while`, `for`, `void`, `char`

## Identifiers
Identifiers are names used to identify variables, functions, arrays, etc. These are defined by the programmer.
* Rules:
1. Must start with a letter (A-Z, a-z) or underscore _
2. Can contain letters, digits (0–9), or underscores
3. Cannot be a keyword
4. Case-sensitive (Score and score are different)

## Constants
Constants are fixed values that do not change during the execution of a program.

* Types:
1. Integer constants: `10`, `20`, `30`
2. Floating-point constants: `3.14`, `-0.5`
3. Character constants: `'A'`, `'a'`
4. String constants: `"Hello"`, `"World"`

## Variables
Variables are container which store value or we can say memory locations that store data. Their values can change during program execution.

```c 
int age = 18;
age++;
printf("now age is : %d\n",age);
```


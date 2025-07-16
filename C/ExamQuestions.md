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
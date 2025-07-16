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

<br><br>
<br>
# 3. Explain the compiling process of a C program.

## 📝 Definition: Compilation Process

Compilation is the process of converting source code (written by the programmer in a high-level language like C) into object code (low-level code understood by the computer).
This transformation is performed by a program called a compiler.

The compiler:
- Checks for **errors** in the code (like syntax mistakes).
- If no errors are found, it creates the object code.

The compilation process happens in **four main steps**:
1. **Preprocessing**
2. **Compiling**
3. **Assembling**
4. **Linking**


### 1. Preprocessing
- Handles `#include`, `#define`, and other preprocessor directives.
- Removes comments and expands macros.

### 2.Compilation
- Converts preprocessed code into **assembly code**.
- Performs **syntax checking** and reports errors.

### 3.Assembly
- Converts assembly code into **machine-level object code** (`.o` or `.obj` files).

### 4.Linking
- Links object code with necessary libraries (like `stdio.h`) to produce the **final executable** (`.exe`).
- Resolves external references like `printf()`.

---

<br><br><br>

# Differentiate between: `Compiler vs Interpreter`, `Call by value vs Call by reference`, `while vs do-while`

##  Compiler vs Interpreter
A compiler translates the whole code into machine code at once, creating an executable. An interpreter translates and runs code line by line. Compilers are faster after compile-time; interpreters show errors one at a time and don’t create files.


## Call by Value vs Call by Reference
In call by value, a copy of the variable is passed, so changes don’t affect the original. In call by reference, the actual memory address is passed, allowing the function to modify the original variable directly.

## while vs do-while
while checks the condition before executing the loop body, so it may run zero times. do-while executes the loop body once before checking the condition, ensuring it runs at least once regardless of the condition.

<br><br><br>

#  Data Types in C (with Table Explanation)
In C, data types define the type of data a variable can hold — such as integers, characters, or floating-point numbers. They help the compiler allocate appropriate memory and understand how to interpret the data.

## 🔢 Types of Data Types in C

| **Category**        | **Data Type**                    | **Size (Bytes)** | **Description**                                |
|---------------------|----------------------------------|------------------|------------------------------------------------|
| **Basic / Primary** | `int`                            | 4                | Stores integers (e.g., 1, -100, 45)             |
|                     | `char`                           | 1                | Stores single characters (e.g., 'a', 'Z')       |
|                     | `float`                          | 4                | Stores decimal numbers (e.g., 3.14)             |
|                     | `double`                         | 8                | Stores larger decimal numbers                  |
| **Derived**         | `array`, `pointer`, `function`, `structure` | Varies         | Built from basic data types                    |
| **Enumeration**     | `enum`                           | 4                | User-defined data type with named constants     |
| **Void**            | `void`                           | 0                | Represents no value or no return type          |

---

## 🧠 Example

```c
int age = 20;
char grade = 'A';
float height = 5.8;
```


<br><br><br>

# What is type casting? Give an example.
Type casting in C is the process of converting one data type into another manually. It’s often used when you want to perform operations between different data types or avoid data loss.

* syntax:
```
(type) variable;
```

* Example:
```c
int a = 10, b = 3;
float result;

result = (float) a / b;  // Type casting int to float
printf("%f", result);    // Output: 3.333333
```

Type casting is used to convert values from one data type to another, such as int to float, to ensure correct calculations or formatting.

<br><br><br>

# What is file handling in C? Explain fopen(), fclose(), fprintf(), fscanf().
File handling in C allows programs to create, read, write, and modify files stored on the disk. Instead of using input/output on the console, file handling lets you store data permanently in files like .txt.



| **Function** | **Purpose**                                       | **Syntax**                                  |
|--------------|---------------------------------------------------|----------------------------------------------|
| `fopen()`    | Opens a file in specified mode (read, write, etc.)| `FILE *fp = fopen("file.txt", "r");`         |
| `fclose()`   | Closes an opened file                             | `fclose(fp);`                                |
| `fprintf()`  | Writes formatted data to a file                   | `fprintf(fp, "Name: %s", name);`             |
| `fscanf()`   | Reads formatted data from a file                  | `fscanf(fp, "%d", &age);`                    |

<br>

```c
#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in write mode
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    // Write to file
    fprintf(fp, "Hello, Sharwan!\n");
    fclose(fp);

    // Open file in read mode
    fp = fopen("data.txt", "r");
    char str[100];
    fscanf(fp, "%[^\n]", str);
    printf("Read from file: %s\n", str);

    fclose(fp);
    return 0;
}
```

* Table



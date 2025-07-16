# 1. What are keywords? Explain the compiling process of C program.

## ✅ What are Keywords?

**Keywords** are reserved words in the C programming language that have **special meaning to the compiler**. They are part of the syntax and are used to perform **specific operations**, define **data types**, **control structures**, and other **language features**. Since their purpose is predefined, **you cannot use them as variable names, function names, or identifiers**.



### 🔹 Examples of Keywords:
- `int`
- `float`
- `if`
- `else`
- `return`
- `while`
- `for`

> ⚠️ These words help define the structure and rules of a C program.

---

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



# 1.  what do you mean by addressing Mode?
## Discuss Immediate, Direct, and Indirect Addressing mode with example?

Addressing mode refers to the way an instructing in assembly language specifies the location of operand (data). In simpiler term it tells the cpu where to find the data needed to perform the operations like addtion, subtraction etc.

Addressing modes are crucial to computer architcture because they provide flexiablity and efficency to data handling.

* **Immediate Addressing Mode**: 
The operand is directly specified in the instruction by itself. 
eg mov A, #5

* **Direct Addressing Mode**:
The instruction provide the memory location where the operand is located. eg mov A, 3000H

* **Indirect Addressing Mode**:
The instruction refers to the register or memory address which holds the memory location of the operand eg mov A, @R0

<br><br><br>

# 2.  Discuss All the register used in 8085 microprocessor.
The 8085 microprocessor contains various registers such as the accumulator for ALU operations, six general-purpose registers (B, C, D, E, H, L), a program counter to track instruction execution, a stack pointer to handle stack operations, a flag register for condition checking, and internal registers like the instruction register, temporary register, and buffers that help in processing and memory access.

<br>

##  1. Accumulator (A Register)
→ An 8-bit register used to store data and results of arithmetic and logic operations.

##  2. General Purpose Registers (B, C, D, E, H, L)
→ Six 8-bit registers used for data storage and paired as BC, DE, and HL for 16-bit operations.

##  3. Program Counter (PC)
→ A 16-bit register that holds the address of the next instruction to execute.

##  4. Stack Pointer (SP)
→ A 16-bit register that points to the current top of the stack in memory.

##  5. Flag Register
→ An 8-bit register that shows the status of ALU operations through five condition flags (S, Z, AC, P, CY).

##  6. Temporary Register
→ An internal register used by the ALU during operations, not accessible to the user.

##  7. Instruction Register
→ Holds the current instruction’s opcode fetched from memory for decoding.

##  8. Memory Buffer Register (MBR) / Data Register
→ Temporarily stores data being read from or written to memory.

##  9. Address Buffer Register
→ Temporarily stores the address being sent to or received from memory.

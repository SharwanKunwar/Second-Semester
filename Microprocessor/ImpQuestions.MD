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

<br><br><br>

# 3.  Discuss All the register used in 8085 microprocessor.
The basic computer architecture refers to a simplified model used in digital logic and computer organization to demonstrate how a computer works at a fundamental level. It consists of three main units:

* Central Processing Unit (CPU)

* Memory Unit

* Input/Output (I/O) Unit

<br>


---

### 1. Central Processing Unit (CPU)

The CPU is the core component of a computer responsible for executing instructions and processing data. It consists of the **Arithmetic Logic Unit (ALU)**, **Control Unit (CU)**, and **Registers**. It performs operations like calculations, logic decisions, and instruction control.

📌 **Example:**  
When you play a game, the CPU calculates player movement, updates graphics, and controls game logic in real-time.

---

### 2. Memory Unit

The memory unit stores all the data and instructions that the CPU needs during execution. It is divided into **primary memory** (like **RAM** and **ROM**) and is essential for the computer's performance. It holds programs currently being executed and temporary data.

📌 **Example:**  
When editing a photo, the image and editing tools are loaded into RAM, allowing fast access and changes before saving it to the hard drive.

---

### 3. Input/Output (I/O) Unit

The I/O unit manages data exchange between the computer and external devices. **Input devices** send data to the system, while **output devices** display results. I/O interfaces ensure smooth communication between hardware and the CPU.

📌 **Example:**  
When you type on a keyboard (input), the text appears on the monitor (output), and the I/O system handles this interaction.

---


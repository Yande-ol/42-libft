# Libft  

Welcome to **Libft** !  
This project is all about building your own toolbox from scratch: rewriting standard C functions, adding powerful utilities, and even handling linked lists.  
Think of it as your **Swiss Army Knife for C projects**. 🔧  

---

## What’s Inside?  

The library is split into three parts:  

1️⃣ **Part 1** – Reimplementation of standard C functions (like `strlen`, `strdup`, `memset`, etc.)  
2️⃣ **Part 2** – Extra utility functions for strings, memory, and conversions  
3️⃣ **Bonus** – A full set of **linked list functions**, to manipulate nodes like a pro  

---

## 🛠️ How to Build  

🔹 Compile the library:  
```bash
make
```
Creates `libft.a` 

🔹 Add the bonus linked list functions:
```bash
make bonus
```
🔹 Clean up the mess:
```bash
make clean : remove object files
make fclean : remove object files and libft.a
```

---

## How to use
Include the header file:
```c
#include "libft.h"
```
Compile your program with Libft:
```bash
gcc main.c -L. -lft -I. -o myprogram
```

---

## Why Libft Matters
1. Foces you to understand C inside-out(memory, pointers, allocation)
2. gives you a realiable toolbox you will use in every future projects
3. Trains you to write clean, reusable, and efficient code




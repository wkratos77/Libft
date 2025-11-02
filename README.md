# 📚 Libft — My Very First C Library

Libft is the first project at [1337 School](https://42.fr) that consists of re-coding a set of standard C library functions, along with additional utility functions that will be reused throughout future projects.

---
![42 Badge](https://img.shields.io/badge/1337%20School-Libft-blue?style=flat-square&logo=42)
![C Language](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c)
![Norminette](https://img.shields.io/badge/Norminette-100%25-green?style=flat-square)
![License](https://img.shields.io/badge/License-42-blue?style=flat-square)

> 🧰 *A foundation library built from scratch to understand memory, pointers, and data structures in C.*

## 🧠 Overview

The goal of Libft is to understand, implement, and master the core mechanisms of C programming:
- Memory management (`malloc`, `free`, pointer arithmetic)
- String manipulation
- Linked lists
- Static functions and modular organization
- Compilation via `Makefile`

You end up with your **own library**, `libft.a`, that can be linked to any future C project.

---

## ⚙️ Compilation

Clone the repository and run:

```bash
make          # builds mandatory part
make bonus    # builds with bonus (linked list functions)
make clean    # removes object files
make fclean   # removes objects and libft.a
make re       # rebuild everything`
```
## 📁 Project Structure

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── (bonus) ft_lst*.c
```
## 🧩 Implemented Functions

### Part 1 — Libc Functions
| Category                    | Functions                                                                                            |
| --------------------------- | ---------------------------------------------------------------------------------------------------- |
| **Character checks**        | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint`                                     |
| **String length / memory**  | `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove`                                          |
| **String search / compare** | `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr` |
| **Conversion**              | `ft_atoi`                                                                                            |
| **Memory allocation**       | `ft_calloc` `ft_strdup`                                                                              |
| **Character case**          | `ft_toupper` `ft_tolower`                                                                            |


### Part 2 — Additional Functions
| Category                      | Functions                                                     |
| ----------------------------- | ------------------------------------------------------------- |
| **String manipulation**       | `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split`              |
| **Conversion**                | `ft_itoa`                                                     |
| **Function pointers**         | `ft_strmapi` `ft_striteri`                                    |
| **File descriptors (output)** | `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` |

### Bonus — Linked Lists
| Function          | Description                                                                |
| ----------------- | -------------------------------------------------------------------------- |
| `ft_lstnew`       | Create a new node                                                          |
| `ft_lstadd_front` | Add a node at the beginning of the list                                    |
| `ft_lstsize`      | Count the number of nodes                                                  |
| `ft_lstlast`      | Return the last node of the list                                           |
| `ft_lstadd_back`  | Add a node at the end of the list                                          |
| `ft_lstdelone`    | Delete one node using a function `del`                                     |
| `ft_lstclear`     | Delete and free all nodes                                                  |
| `ft_lstiter`      | Apply a function to each node’s content                                    |
| `ft_lstmap`       | Create a new list resulting from the successive applications of a function |
## 🚀 Usage Example

After building the library, you can use it in any C project:

```bash
make
cc main.c libft.a -o my_program
./my_program
```
## ✅ Project Status


| Check | Result |
|-------|--------|
| Norminette | ✅ Passed |
| Memory leaks | ✅ None (checked with Valgrind) |
| Mandatory part | ✅ Completed |
| Bonus part | ✅ Completed |
| Segfaults | 🚫 None |
| Compilation flags | `-Wall -Wextra -Werror` |

## 👨‍💻 Author

**Walid Krati** [wkrati] 

AKA: Kratos

🎓 1337 / 42 Network  

🔗 [GitHub — @wkratos77](https://github.com/wkratos77)

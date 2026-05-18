*This project has been created as part of the 42 curriculum by asaunina.*

# libft

## Description

**libft** is a custom C library built from scratch as part of the 42 curriculum. The goal of this project is to re-implement a set of standard C library functions, as well as create additional utility functions that will be reused throughout future 42 projects.

The library is organized into three parts:
- **Part 1** — re-implementations of standard libc functions (`ft_strlen`, `ft_memcpy`, `ft_atoi`, etc.)
- **Part 2** — additional utility functions not found in the standard library (`ft_split`, `ft_itoa`, `ft_strtrim`, etc.)
- **Part 3** — linked list manipulation functions using the `t_list` structure

## Instructions

### Compilation

Clone the repository and run `make` at the root:

```bash
git clone <your_repo_url>
cd libft
make
```

This will compile all source files and produce `libft.a` — a static library archive.

### Available make rules

| Rule | Description |
|------|-------------|
| `make` or `make all` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Full recompilation |

### Usage

To use the library in your own project, include the header and link the archive:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

## Library Description

### Part 1 — Libc functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Convert a string to an integer |
| `ft_bzero` | Set memory to zero |
| `ft_calloc` | Allocate and zero-initialize memory |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isascii` | Check if character is ASCII |
| `ft_isdigit` | Check if character is a digit |
| `ft_isprint` | Check if character is printable |
| `ft_memchr` | Locate a byte in memory |
| `ft_memcmp` | Compare memory areas |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area, handling overlap |
| `ft_memset` | Fill memory with a constant byte |
| `ft_strchr` | Locate character in string |
| `ft_strdup` | Duplicate a string |
| `ft_strlcat` | Concatenate strings (size-bounded) |
| `ft_strlcpy` | Copy strings (size-bounded) |
| `ft_strlen` | Get string length |
| `ft_strncmp` | Compare two strings up to n bytes |
| `ft_strnstr` | Locate a substring in a string |
| `ft_strrchr` | Locate character in string from the end |
| `ft_tolower` | Convert character to lowercase |
| `ft_toupper` | Convert character to uppercase |

### Part 2 — Additional functions

| Function | Description |
|----------|-------------|
| `ft_itoa` | Convert integer to string |
| `ft_putchar_fd` | Output a character to a file descriptor |
| `ft_putendl_fd` | Output a string followed by newline to a file descriptor |
| `ft_putnbr_fd` | Output an integer to a file descriptor |
| `ft_putstr_fd` | Output a string to a file descriptor |
| `ft_split` | Split a string by a delimiter character |
| `ft_striteri` | Apply a function to each character of a string (with index) |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strmapi` | Apply a function to each character, returning a new string |
| `ft_strtrim` | Trim characters from both ends of a string |
| `ft_substr` | Extract a substring from a string |

### Part 3 — Linked list functions
This part uses the following structure:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add a node at the beginning of the list |
| `ft_lstadd_back` | Add a node at the end of the list |
| `ft_lstsize` | Count the number of nodes in the list |
| `ft_lstlast` | Return the last node of the list |
| `ft_lstdelone` | Delete a single node using a given function |
| `ft_lstclear` | Delete all nodes of the list |
| `ft_lstiter` | Apply a function to the content of each node |
| `ft_lstmap` | Create a new list by applying a function to each node's content |

## Resources

### References

- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [42 Docs — libft](https://harm-smits.github.io/42docs/projects/libft)
- [Understanding linked lists](https://www.learn-c.org/en/Linked_lists)

### AI Usage

AI (Claude by Anthropic) was used during this project for the following purposes:
- Understanding the concept of linked lists and how they differ from arrays
- Clarifying the meaning of single and double pointers (`*` vs `**`)
- Understanding why `void *` is used in the `t_list` structure
- Debugging logical errors in function implementations
- Understanding memory management (`malloc` / `free`) and when to apply each

*This activity has been created as part of the 42 curriculum by <aalorsan>.*

# libft

## Description

This project consists of creating a personal C library, **libft**, which reimplements a set of standard C library functions as well as additional utility functions.  
The goal of this activity is to strengthen understanding of the C language, including memory management, pointers, strings, and linked lists.

The **libft** library acts as a foundational toolkit that will be reused in many future projects in the 42 curriculum.

## Instructions

### Compilation

To compile the library, run:

```sh
make
```

This will generate the static library:

```sh
libft.a
```

### Cleaning

Remove object files:
```sh
make clean
```

Remove object files and the library:
```sh
make fclean
```

Recompile everything:
```sh
make re
```

### Usage

Include the header file in your source code:

```c
#include "libft.h"
```

Compile your program with the library:

```sh
cc main.c -L. -lft
```

## Library Content

The **libft** library contains several categories of functions.

### Standard C Library Reimplementations

- Memory manipulation:  
  `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_calloc`
- String handling:  
  `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_strncmp`
- Character checks and conversions:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,  
  `ft_toupper`, `ft_tolower`
- Conversion:  
  `ft_atoi`

### Additional Utility Functions

- String utilities:  
  `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- Output functions:  
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Iteration helpers:  
  `ft_striteri`, `ft_strmapi`

### Linked List Functions

- Creation and insertion:  
  `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- Information:  
  `ft_lstsize`, `ft_lstlast`
- Deletion and cleanup:  
  `ft_lstdelone`, `ft_lstclear`
- Iteration and mapping:  
  `ft_lstiter`, `ft_lstmap`

Linked list structure used:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

## Technical Choices

- Written in **C** following **Norminette** rules
- No forbidden functions used
- Careful memory allocation and deallocation
- Consistent naming and behavior across functions

## Resources

### References

- Linux manual pages (`man malloc`, `man calloc`, etc.)
- 42 subject PDF

### Use of AI

AI tools were used **only as learning support**, specifically to:
- Explain C concepts (pointers, function pointers, linked lists)
- Clarify expected behavior of standard functions
- Review logic and suggest improvements

All code was written, tested, and debugged manually. AI was not used to generate final code.

## Additional Information

This library is intended to be reused and extended in future 42 projects.

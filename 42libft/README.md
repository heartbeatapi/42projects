*This project has been created as part of the 42 core curriculum by davatanz.*

## Description

Libft is my first C library, developed as part of the 42 core curriculum. The goal of this project is to recreate standard C library functions and implement additional functions from scratch.

The resulting functions are compiled into a library called `libft.a`, which can be reused in future C projects.

The project is divided into three parts.

## Part 1: Libc Functions

Reimplementations of standard C library functions for character checks, memory operations, string manipulation, and conversions.

**Checks**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

**Memory**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

**String manipulation**
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`

**Conversions**
- `ft_atoi`

## Part 2: Additional Functions

Functions for string manipulation, memory allocation, conversions, and writing to file descriptors.

**String manipulation**
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

**Conversions**
- `ft_itoa`

**File descriptor**
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Part 3: Linked List Functions

Functions for creating, modifying and deleting linked lists using the `t_list` structure.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## My Approach

- Implemented the required functions in C while following the 42 Norm throughout development, rather than leaving all norm checks until the end.
- Asked peers for help when I got stuck and used AI as a supplementary learning resource when I couldn't find answers elsewhere.

## Challenges and Lessons Learned

- Learned how to write a Makefile to automate compilation and manage the creation and removal of object files and the static library.
- Learned how linked list functions depend on one another, requiring me to consider how individual functions interact with the overall structure rather than treating every function as an independant individual.

## Instructions

Run the following commands from the project directory.

**Compile the library**

```bash
make
```

**Remove object files**

```bash
make clean
```

**Remove object files and the static library**

```bash
make fclean
```

**Recompile everything**

```bash
make re
```

After compilation, the `libft.a` library can be linked to another C project.

For example, to compile a program called `main.c` that uses the library:

```bash
cc main.c libft.a
```

Run the resulting executable:

```bash
./a.out
```

## Resources

**Linux man pages:** Used to understand standard C library functions, their parameters, return values, and expected behavior.

**W3Schools and GeeksforGeeks:** Used to learn and review C programming concepts and syntax.

**AI usage:**

AI tools were used as learning resources to clarify C concepts, reason about function behavior, and find potential bugs.

AI was used relatively little during Parts 1 and 2. Its use was more during Part 3, as linked lists were an entirely new concept to me. AI helped me understand how linked list functions depend on one another and how individual operations affect the overall structure. This helped me approach problems from a broader perspective instead of considering each function by itself.

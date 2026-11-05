# ft_printf

*This project has been created as part of the 42 core curriculum by davatanz*

## Description

ft_printf is my first personal implementation of the libc printf function. The goal of the project was the partial recreation of the printf behaviour.

It includes the following conversions:

`%c` prints a single character.
`%s` prints a string.
`%p` prints the void * pointer in hexadecimal format.
`%d` prints a decimal (base 10) number.
`%i` prints an integer in base 10.
`%u` prints an unsigned decimal (base 10) number.
`%x` prints a number in hexadecimal (base 16) lowercase format.
`%X` prints a number in hexadecimal (base 16) uppercase format.
`%%` prints a percent sign.

**Algorithm**

It writes until the next `%` or `\0`. Once it finds a % it enters one of the corresponding writer functions depending on whether it matches `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X` or `%`. If it finds none it just prints the charaters within the string.

## My Approach

- Started with creating the Makefile as this is the simplest step.
- Wrote the first format checks and tested along the way.
- Once the general foundation was stable and running, moved on to edgecase testing and norminetting.

## Challenges and Lessons Learned

- Learned how to use Variadic Lists in order to dynamically iterate through arguments within a string.
- Asked peers for help when I got stuck and used AI as a supplementary learning resource when I couldn't find answers elsewhere.

## Instructions

To use the library use `make`. `make clean` removes old object and dependency files. `make fclean` removes all object, dependency and the library files.

In order to compile it with a main file do the following:

```cc main.c libftprintf.a```

Then use the created executable:

```./a.out```

## Resources

**Medium:** Used to read up on the theory part of printf.

**GeeksforGeeks** Used to learn about Variadic Functions and to get a greater understanding of va_list and its syntax.

**AI usage:**

AI tools were used as learning resources to clarify the concept behind variadic functions. It was also used as a helper tool for bug fixing.
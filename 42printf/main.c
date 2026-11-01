#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main()
{
	const char	*add1;
	const char	*add2;

	add1 = "Foxhound";
	add2 = "Foxbat";

	printf("\n=====PUTCHAR TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%c", 'M'));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%c", 0));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%c", ' '));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%c", 127));
	printf("\nlibc printf putchar & total chars: %d\n\n",
		printf("%c", 127));

	printf("\n=====PUTSTR TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%s", "hello"));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%s", ""));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%s", NULL));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%s", "hello\n"));
	printf("\nlibc printf putstr & total chars: %d\n\n",
		printf("%s", "MiG-29 Fulcrum"));

	printf("\n=====PUTADD TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%p", add1));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%p", add2));
	printf("\nlibc printf putadd & total chars: %d\n\n",
		printf("%p", add1));
	printf("\nlibc printf putadd & total chars: %d\n\n",
		printf("%p", add2));

	printf("\n=====PUTNBR TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%d", 10));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%d", -10));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%d", INT_MAX));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%d", INT_MIN));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%d", -2263525235248));
	printf("\nlibc printf putnbr & total chars: %d\n\n",
		printf("%d", INT_MIN));
	return (0);
}

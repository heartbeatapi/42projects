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

//TEST MAIN:
/*#include <stdio.h>

int	main()
{
	printf("total chars: %d\n", 
		ft_printf("The Soviet %s%d %s was the fastest operational %s of all time. It's top speed was %s%d,%d which translates to roughly %d km/h.\n", "MiG-", 25, "Foxbat", "Interceptor", "Mach ", 2, 83, 3000));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The %s is the newest Generation %d MBT from %s.\n", "Leopard 2A8", 3, "Germany"));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The %s T-%u MBT, has a gun depression of %d degrees.\n", "Russian", 80, -5));
	printf("\n");
	printf("total chars: %d\n",
		printf("The address of the string %s is %p.\n", "Foxhound", "Foxhound"));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The engine starts to %s at a constant %u%% thrust.\n", "overheat", 100));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("Base 16 of %d = %x.\n", -1, -1));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("Base 16 of %d = %X.\n", -1, -1));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("Ich mag Nugg%uts.\n", 3));
	printf("total chars: %d\n",
			printf("%d\n", 20));
	return (0);
}*/
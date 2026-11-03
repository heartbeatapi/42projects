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
	
	printf("\n=====PUTUNBR TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%u", 10));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%u", INT_MAX));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%u", -1));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%u", 0));
	printf("\nlibc printf putunsign & total chars: %d\n\n",
		printf("%u", -1));

	printf("\n=====PUTHEXLOWER TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%x", -1));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%x", UINT_MAX));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%x", 42));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%x", 255));
	printf("\nlibc printf puthexlower & total chars: %d\n\n",
		printf("%x", 300));

	printf("\n=====PUTHEXUPPER TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%X", -1));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%X", UINT_MAX));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%X", 42));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%X", 255));
	printf("\nlibc printf puthexlower & total chars: %d\n\n",
		printf("%X", 300));

	printf("\n=====PUTPERCENT TESTS=====\n\n");
	printf("\ntotal chars: %d\n\n",
		ft_printf("%%"));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%%%%"));
	printf("\ntotal chars: %d\n\n",
		ft_printf("%%%%%%"));
	printf("\nlibc printf putpercent & total chars: %d\n\n",
		printf("%%%%%%"));
	return (0);
}

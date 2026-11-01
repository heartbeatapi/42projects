#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	printf("PUTCHAR TESTS:\n\n");
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 'M'));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 0));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", ' '));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 127));
	printf("\nlibc printf test & total chars: %d\n",
		printf("%c", 127));
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
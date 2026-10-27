#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

void	print(int n, ...)
{
	va_list args;
	va_start (args, n);
	size_t	i;

	i = 0;
	while ((int) i < n)
	{
		printf("%d ", va_arg(args, int));
		i++;
	}
	printf("\n");
	va_end(args);
}

int	main()
{
	print(3, 1, 2, 3);
	print(5, 1, 2, 3, 4 ,5);
	return (0);
}
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("%d\n", ft_printf("%%"));
	printf("%d\n", ft_printf("%c", 71));
	printf("%d\n", ft_printf("GottDio"));
}

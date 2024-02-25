#include <stdio.h>
#include "ft_printf.h"

void	redirect_stdout_to_null()
{
	freopen("/dev/null", "w", stdout);
}

void	restore_stdout()
{
	freopen("/dev/tty", "w", stdout);
}

void	test_return_value_printf_percentage_percentage()
{
	int result_printf;
	int result_ft;

	redirect_stdout_to_null();

	result_printf = printf("%%");
	result_ft = ft_printf("%%");

	restore_stdout();

	printf("%% [return]: %s", result_printf == result_ft ? "\033[32mOK\033[0m": "\033[31mKO\033[0m");
	printf(" (");
	if (result_printf != result_ft)
		printf("C: %d vs. FT: %d", result_printf, result_ft);
	else
		printf("both: %d", result_printf);
	printf(")\n");

}


int	main(void)
{
	test_return_value_printf_percentage_percentage();
}














/*
void	test_return_value_printf(char const *format, ...)
{
	va_list vargs;
	int result_printf;

	va_start(vargs, format);
	result_printf = vprintf(format, vargs);
	va_end(vargs);
	printf("%d\n", result_printf);
}

int	main(void)
{
	printf("%d\n", ft_printf("%%"));
	printf("%d\n", ft_printf("%c", 71));
	printf("%d\n", ft_printf("GottDio"));

	// test_return_value_printf("%d\n", 7);
}
*/

#include <stdio.h>
#include "ft_printf.h"

#define FAIL(text) "\033[31m" text "\033[0m"
#define SUCCESS(text) "\033[32m" text "\033[0m"

void	redirect_stdout_to_null()
{
	freopen("/dev/null", "w", stdout);
}

void	restore_stdout()
{
	freopen("/dev/tty", "w", stdout);
}


void	test_return_value_printf_percentage_x(char *conversionChar, int result_printf, int result_ft)
{
	restore_stdout();

	printf("%%%s [return]: %s", conversionChar, result_printf == result_ft ? SUCCESS("OK"): FAIL("KO!"));
	printf(" (");
	if (result_printf != result_ft)
		printf("C: %d vs. FT: %d", result_printf, result_ft);
	else
		printf("both: %d", result_printf);
	printf(")\n");
}


void	test_return_value_printf_percentage_percentage()
{
	redirect_stdout_to_null();

	test_return_value_printf_percentage_x("%", printf("%%"), ft_printf("%%"));
}


void	test_return_value_printf_percentage_c1()
{
	redirect_stdout_to_null();

	test_return_value_printf_percentage_x("c", printf("%c", 71), ft_printf("%c", 71));
}

void	test_return_value_printf_percentage_c2()
{
	redirect_stdout_to_null();

	test_return_value_printf_percentage_x("c", printf("%c", 65), ft_printf("%c", 65));
}


int	main(void)
{
	test_return_value_printf_percentage_percentage();

	test_return_value_printf_percentage_c1();
	test_return_value_printf_percentage_c2();
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

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

void	test_return_value_printf_percentage_percentage()
{
	int result_printf;
	int result_ft;

	redirect_stdout_to_null();

	result_printf = printf("%%");
	result_ft = ft_printf("%%");

	restore_stdout();

	printf("%%%% [return]: %s", result_printf == result_ft ? SUCCESS("OK"): FAIL("KO!"));
	printf(" (");
	if (result_printf != result_ft)
		printf("C: %d vs. FT: %d", result_printf, result_ft);
	else
		printf("both: %d", result_printf);
	printf(")\n");
}

void	test_return_value_printf_percentage_c()
{
	int result_printf;
	int result_ft;

	redirect_stdout_to_null();

	result_printf = printf("%c", 71);
	result_ft = ft_printf("%c", 71);

	restore_stdout();

	printf("%%c [return]: %s", result_printf == result_ft ? SUCCESS("OK"): FAIL("KO!"));
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
	test_return_value_printf_percentage_c();
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

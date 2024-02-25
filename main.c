#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_printf.h"


int	main(void)
{
	printf(   " C: %%\n");
	ft_printf("FT: %%\n");
	printf(   " C: %d\n", printf(   "%%"));
	printf(   "FT: %d\n", ft_printf("%%"));
	printf(   "\n");


	printf(   " C: %c\n", 71);
	ft_printf("FT: %c\n", 71);
	printf(   " C: %d\n", printf(   "%c", 71));
	printf(   "FT: %d\n", ft_printf("%c", 71));
	printf(   "\n");

	printf(   " C: %c\n", 103);
	ft_printf("FT: %c\n", 103);
	printf(   " C: %d\n", printf(   "%c", 103));
	printf(   "FT: %d\n", ft_printf("%c", 103));
	printf(   "\n");

	printf(   " C: %c\n", 0);
	ft_printf("FT: %c\n", 0);
	printf(   " C: %d\n", printf(   "%c", 0));
	printf(   "FT: %d\n", ft_printf("%c", 0));
	printf(   "\n");


	printf(   " C: %s\n", "GOTT");
	ft_printf("FT: %s\n", "GOTT");
	printf(   " C: %d\n", printf(   "%s", "GOTT"));
	printf(   "FT: %d\n", ft_printf("%s", "GOTT"));
	printf(   "\n");

	printf(   " C: %s\n", "");
	ft_printf("FT: %s\n", "");
	printf(   " C: %d\n", printf(   "%s", ""));
	printf(   "FT: %d\n", ft_printf("%s", ""));
	printf(   "\n");

	printf(   " C: %s\n", (char *) NULL);
	ft_printf("FT: %s\n", (char *) NULL);
	printf(   " C: %d\n", printf(   "%s", (char *) NULL));
	printf(   "FT: %d\n", ft_printf("%s", (char *) NULL));
	printf(   "\n");


	printf(   " C: GOTT\n");
	ft_printf("FT: GOTT\n");
	printf(   " C: %d\n", printf(   "GOTT"));
	printf(   "FT: %d\n", ft_printf("GOTT"));
	printf(   "\n");

	printf(   " C: %s\n", "");
	ft_printf("FT: %s\n", "");
	printf(   " C: %d\n", printf(   "%s", ""));
	printf(   "FT: %d\n", ft_printf("%s", ""));
	printf(   "\n");

	printf(   " C: %s\n", (char *) NULL);
	ft_printf("FT: %s\n", (char *) NULL);
	printf(   " C: %d\n", printf(   "%s", (char *) NULL));
	printf(   "FT: %d\n", ft_printf("%s", (char *) NULL));
	printf(   "\n");


	printf(   " C: %d\n", 7);
	ft_printf("FT: %d\n", 7);
	printf(   " C: %d\n", printf(   "%d", 7));
	printf(   "FT: %d\n", ft_printf("%d", 7));

	printf(   " C: %d\n", -7);
	ft_printf("FT: %d\n", -7);
	printf(   " C: %d\n", printf(   "%d", -7));
	printf(   "FT: %d\n", ft_printf("%d", -7));

	printf(   " C: %d\n", 0);
	ft_printf("FT: %d\n", 0);
	printf(   " C: %d\n", printf(   "%d", 0));
	printf(   "FT: %d\n", ft_printf("%d", 0));

	printf(   " C: %d\n", 25);
	ft_printf("FT: %d\n", 25);
	printf(   " C: %d\n", printf(   "%d", 25));
	printf(   "FT: %d\n", ft_printf("%d", 25));

	printf(   " C: %d\n", -43);
	ft_printf("FT: %d\n", -43);
	printf(   " C: %d\n", printf(   "%d", -43));
	printf(   "FT: %d\n", ft_printf("%d", -43));

	printf(   " C: %d\n", INT_MAX);
	ft_printf("FT: %d\n", INT_MAX);
	printf(   " C: %d\n", printf(   "%d", INT_MAX));
	printf(   "FT: %d\n", ft_printf("%d", INT_MAX));

	printf(   " C: %d\n", INT_MIN);
	ft_printf("FT: %d\n", INT_MIN);
	printf(   " C: %d\n", printf(   "%d", INT_MIN));
	printf(   "FT: %d\n", ft_printf("%d", INT_MIN));
	printf(   "\n");


	printf(   " C: %i\n", 7);
	ft_printf("FT: %i\n", 7);
	printf(   " C: %i\n", printf(   "%d", 7));
	printf(   "FT: %i\n", ft_printf("%d", 7));

	printf(   " C: %i\n", -7);
	ft_printf("FT: %i\n", -7);
	printf(   " C: %i\n", printf(   "%d", -7));
	printf(   "FT: %i\n", ft_printf("%d", -7));

	printf(   " C: %i\n", 0);
	ft_printf("FT: %i\n", 0);
	printf(   " C: %i\n", printf(   "%d", 0));
	printf(   "FT: %i\n", ft_printf("%d", 0));

	printf(   " C: %i\n", 25);
	ft_printf("FT: %i\n", 25);
	printf(   " C: %i\n", printf(   "%d", 25));
	printf(   "FT: %i\n", ft_printf("%d", 25));

	printf(   " C: %i\n", -43);
	ft_printf("FT: %i\n", -43);
	printf(   " C: %i\n", printf(   "%d", -43));
	printf(   "FT: %i\n", ft_printf("%d", -43));

	printf(   " C: %i\n", INT_MAX);
	ft_printf("FT: %i\n", INT_MAX);
	printf(   " C: %i\n", printf(   "%d", INT_MAX));
	printf(   "FT: %i\n", ft_printf("%d", INT_MAX));

	printf(   " C: %i\n", INT_MIN);
	ft_printf("FT: %i\n", INT_MIN);
	printf(   " C: %i\n", printf(   "%d", INT_MIN));
	printf(   "FT: %i\n", ft_printf("%d", INT_MIN));
	printf(   "\n");


	printf(   " C: %w\n", 7);
	ft_printf("FT: %w\n", 7);
	printf(   " C: %d\n", printf(   "%w", 71));
	printf(   "FT: %d\n", ft_printf("%w", 71));
	printf(   "\n");


	printf(   " C: NULL\n");
	ft_printf("FT: NULL\n");
	printf(   " C: %d\n", printf(   NULL));
	printf(   "FT: %d\n", ft_printf(NULL));
	printf(   "\n");
}


/*
#define FAIL(text) "\033[31m" text "\033[0m"
E#define SUCCESS(text) "\033[32m" text "\033[0m"


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
*/


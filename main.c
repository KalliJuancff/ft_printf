#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_printf.h"


void	redirect_stdout_to_null()
{
	freopen("/dev/null", "w", stdout);
}

void	restore_stdout()
{
	freopen("/dev/tty", "w", stdout);
}


int	main(void)
{
	int len_c, len_ft;

	// %%
	printf(   "----\n");
	printf(   "'%%%%'\n");
	printf(   "----\n");

	printf(   " C: '%%'\n");
	ft_printf("FT: '%%'\n");
	redirect_stdout_to_null();
	len_c = printf(   "%%");
	len_ft = ft_printf("%%");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %c
	printf(   "----\n");
	printf(   "'%%c'\n");
	printf(   "----\n");

	printf(   " C: '%c'\n", 71);
	ft_printf("FT: '%c'\n", 71);
	redirect_stdout_to_null();
	len_c = printf(   "%c", 71);
	len_ft = ft_printf("%c", 71);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: '%c'\n", 103);
	ft_printf("FT: '%c'\n", 103);
	redirect_stdout_to_null();
	len_c = printf(   "%c", 103);
	len_ft = ft_printf("%c", 103);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: '%c'\n", 0);
	ft_printf("FT: '%c'\n", 0);
	redirect_stdout_to_null();
	len_c = printf(   "%c", 0);
	len_ft = ft_printf("%c", 0);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %s
	printf(   "----\n");
	printf(   "'%%s'\n");
	printf(   "----\n");

	printf(   " C: %s\n", "GOTT");
	ft_printf("FT: %s\n", "GOTT");
	redirect_stdout_to_null();
	len_c = printf(   "%s", "GOTT");
	len_ft = ft_printf("%s", "GOTT");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %s\n", "");
	ft_printf("FT: %s\n", "");
	redirect_stdout_to_null();
	len_c = printf(   "%s", "");
	len_ft = ft_printf("%s", "");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %s\n", (char *) NULL);
	ft_printf("FT: %s\n", (char *) NULL);
	redirect_stdout_to_null();
	len_c = printf(   "%s", (char *) NULL);
	len_ft = ft_printf("%s", (char *) NULL);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: GOTT\n");
	ft_printf("FT: GOTT\n");
	redirect_stdout_to_null();
	len_c = printf(   "GOTT");
	len_ft = ft_printf("GOTT");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %s\n", "");
	ft_printf("FT: %s\n", "");
	redirect_stdout_to_null();
	len_c = printf(   "%s", "");
	len_ft = ft_printf("%s", "");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %s\n", (char *) NULL);
	ft_printf("FT: %s\n", (char *) NULL);
	redirect_stdout_to_null();
	len_c = printf(   "%s", (char *) NULL);
	len_ft = ft_printf("%s", (char *) NULL);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %d (= %i)
	printf(   "----\n");
	printf(   "'%%d' (= '%%i')\n");
	printf(   "----\n");

	printf(   " C: %d\n", 7);
	ft_printf("FT: %d\n", 7);
	redirect_stdout_to_null();
	len_c = printf(   "%d", 7);
	len_ft = ft_printf("%d", 7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", -7);
	ft_printf("FT: %d\n", -7);
	redirect_stdout_to_null();
	len_c = printf(   "%d", -7);
	len_ft = ft_printf("%d", -7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", 0);
	ft_printf("FT: %d\n", 0);
	redirect_stdout_to_null();
	len_c = printf(   "%d", 0);
	len_ft = ft_printf("%d", 0);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", 25);
	ft_printf("FT: %d\n", 25);
	redirect_stdout_to_null();
	len_c = printf(   "%d", 25);
	len_ft = ft_printf("%d", 25);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", -43);
	ft_printf("FT: %d\n", -43);
	redirect_stdout_to_null();
	len_c = printf(   "%d", -43);
	len_ft = ft_printf("%d", -43);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", INT_MAX);
	ft_printf("FT: %d\n", INT_MAX);
	redirect_stdout_to_null();
	len_c = printf(   "%d", INT_MAX);
	len_ft = ft_printf("%d", INT_MAX);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %d\n", INT_MIN);
	ft_printf("FT: %d\n", INT_MIN);
	redirect_stdout_to_null();
	len_c = printf(   "%d", INT_MIN);
	len_ft = ft_printf("%d", INT_MIN);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %x
	printf(   "----\n");
	printf(   "'%%x'\n");
	printf(   "----\n");

	printf(   " C: %x\n", 7);
	ft_printf("FT: %x\n", 7);
	redirect_stdout_to_null();
	len_c = printf(   "%x", 7);
	len_ft = ft_printf("%x", 7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", -7);
	ft_printf("FT: %x\n", -7);
	redirect_stdout_to_null();
	len_c = printf(   "%x", -7);
	len_ft = ft_printf("%x", -7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", 0);
	ft_printf("FT: %x\n", 0);
	redirect_stdout_to_null();
	len_c = printf(   "%x", 0);
	len_ft = ft_printf("%x", 0);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", 25);
	ft_printf("FT: %x\n", 25);
	redirect_stdout_to_null();
	len_c = printf(   "%x", 25);
	len_ft = ft_printf("%x", 25);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", -43);
	ft_printf("FT: %x\n", -43);
	redirect_stdout_to_null();
	len_c = printf(   "%x", -43);
	len_ft = ft_printf("%x", -43);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", INT_MAX);
	ft_printf("FT: %x\n", INT_MAX);
	redirect_stdout_to_null();
	len_c = printf(   "%x", INT_MAX);
	len_ft = ft_printf("%x", INT_MAX);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %x\n", INT_MIN);
	ft_printf("FT: %x\n", INT_MIN);
	redirect_stdout_to_null();
	len_c = printf(   "%x", INT_MIN);
	len_ft = ft_printf("%x", INT_MIN);
	printf(   "\n");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %X
	printf(   "----\n");
	printf(   "'%%X'\n");
	printf(   "----\n");

	printf(   " C: %X\n", 7);
	ft_printf("FT: %X\n", 7);
	redirect_stdout_to_null();
	len_c = printf(   "%X", 7);
	len_ft = ft_printf("%X", 7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", -7);
	ft_printf("FT: %X\n", -7);
	redirect_stdout_to_null();
	len_c = printf(   "%X", -7);
	len_ft = ft_printf("%X", -7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", 0);
	ft_printf("FT: %X\n", 0);
	redirect_stdout_to_null();
	len_c = printf(   "%X", 0);
	len_ft = ft_printf("%X", 0);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", 25);
	ft_printf("FT: %X\n", 25);
	redirect_stdout_to_null();
	len_c = printf(   "%X", 25);
	len_ft = ft_printf("%X", 25);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", -43);
	ft_printf("FT: %X\n", -43);
	redirect_stdout_to_null();
	len_c = printf(   "%X", -43);
	len_ft = ft_printf("%X", -43);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", INT_MAX);
	ft_printf("FT: %X\n", INT_MAX);
	redirect_stdout_to_null();
	len_c = printf(   "%X", INT_MAX);
	len_ft = ft_printf("%X", INT_MAX);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");

	printf(   " C: %X\n", INT_MIN);
	ft_printf("FT: %X\n", INT_MIN);
	redirect_stdout_to_null();
	len_c = printf(   "%X", INT_MIN);
	len_ft = ft_printf("%X", INT_MIN);
	printf(   "\n");
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// %w (NO soportado)
	printf(   "----\n");
	printf(   "'%%w' (no soportado)\n");
	printf(   "----\n");

	printf(   " C: %w\n", 7);
	ft_printf("FT: %w\n", 7);
	redirect_stdout_to_null();
	len_c = printf(   "%w", 7);
	len_ft = ft_printf("%w", 7);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
	printf(   "\n");


	// NULL
	printf(   "------\n");
	printf(   "'NULL'\n");
	printf(   "------\n");

	printf(   " C: %s\n", NULL);
	ft_printf("FT: %s\n", NULL);
	redirect_stdout_to_null();
	len_c = printf("%s", NULL);
	len_ft = ft_printf("%s", NULL);
	restore_stdout();
	printf(   " C: %d\n", len_c);
	printf(   "FT: %d\n", len_ft);
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


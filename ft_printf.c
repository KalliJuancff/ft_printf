/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:43:05 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/26 18:41:03 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

#define LOWERCASE 0
#define UPPERCASE 1

static int	write_format(va_list vargs, char format)
{
	if (format == '%')
		return (write_char('%'));
	if (format == 'c')
		return (write_char(va_arg(vargs, int)));
	else if (format == 's')
		return (write_string(va_arg(vargs, char *)));
	else if (format == 'd' || format == 'i')
		return (write_number(va_arg(vargs, int)));
	else if (format == 'x')
		return (write_hexa(va_arg(vargs, int), LOWERCASE));
	else if (format == 'X')
		return (write_hexa(va_arg(vargs, int), UPPERCASE));
	return (write_char(format));
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		result;
	int		current;

	result = 0;
	if (format == NULL)
		return (0);
	va_start(vargs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			current = write_format(vargs, *format);
			if (current == -1)
				return (-1);
			result += current;
		}
		else
			result += write_char(*format);
		format++;
	}
	va_end(vargs);
	return (result);
}

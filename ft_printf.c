/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:43:05 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/28 17:01:53 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"

static int	write_format(va_list vargs, char format)
{
	if (format == 'c')
		return (write_char(va_arg(vargs, int)));
	if (format == 's')
		return (write_string(va_arg(vargs, char *)));
	if (format == 'p')
		return (write_pointer(va_arg(vargs, unsigned long)));
	if (format == 'd' || format == 'i')
		return (write_number(va_arg(vargs, int)));
	if (format == 'u')
		return (write_number(va_arg(vargs, unsigned int)));
	if (format == 'x')
		return (write_hexa(va_arg(vargs, int), LOWERCASE));
	if (format == 'X')
		return (write_hexa(va_arg(vargs, int), UPPERCASE));
	if (format == '%')
		return (write_char('%'));
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
		}
		else
			current = write_char(*format);
		if (current == -1)
			return (-1);
		result += current;
		format++;
	}
	va_end(vargs);
	return (result);
}

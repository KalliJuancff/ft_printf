/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:43:05 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/25 19:48:09 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	write_char(int ch)
{
	return (write(1, &ch, 1));
}

int	write_string(char *s)
{
	int	result;

	if (s == NULL)
		s = "(null)";
	result = 0;
	while (s[result] != '\0')
	{
		if (write_char(s[result]) == -1)
			return (-1);
		result++;
	}
	return (result);
}

int	write_format(va_list vargs, char format)
{
	if (format == '%')
		return (write_char('%'));
	if (format == 'c')
		return (write_char(va_arg(vargs, int)));
	else if (format == 's')
		return (write_string(va_arg(vargs, char *)));
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

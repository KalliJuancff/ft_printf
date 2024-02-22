/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:43:05 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/22 19:44:09 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	write_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	write_char(int ch)
{
	write(1, &ch, 1);
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		result;

	result = 0;
	if (format == NULL)
		return (0);
	va_start(vargs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				result += write_percent();
			else if (*format == 'c')
				result += write_char(va_arg(vargs, int));
		}
		else
			result += write_char(*format);
		format++;
	}
	va_end(vargs);
	return (result);
}

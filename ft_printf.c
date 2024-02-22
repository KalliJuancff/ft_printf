/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:43:05 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/22 16:08:18 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		ret;

	if (format == NULL)
		return (0);
	va_start(vargs, format);
	ret = printf(format, vargs);
	va_end(vargs);
	return (ret);
}

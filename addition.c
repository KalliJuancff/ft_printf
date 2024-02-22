/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:13:57 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/22 17:17:36 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int	addition(int n, ...)
{
	int		result;
	va_list	vargs;
	int		i;

	result = 0;
	va_start(vargs, n);
	i = 0;
	while (i < n)
	{
		result += va_arg(vargs, int);
		i++;
	}
	va_end(vargs);
	return (result);
}

int	main(void)
{
	int	total;

	total = addition(4, 5, 2, 11, 7);
	printf("Total: %d\n", total);
	return (0);
}

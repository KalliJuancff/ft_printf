/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:01:16 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/25 21:28:22 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_number_aux(unsigned int n)
{
	int	result1;
	int	result2;

	if (n < 10)
	{
		if (write_char(n + '0') == -1)
			return (-1);
		return (1);
	}
	else
	{
		result1 = write_number_aux(n / 10);
		if (result1 == -1)
			return (-1);
		result2 = write_number_aux(n % 10);
		if (result2 == -1)
			return (-1);
		return (result1 + result2);
	}
}

int	write_number(int n)
{
	int	result;

	if (n < 0)
	{
		if (write_char('-') == -1)
			return (-1);
		result = (write_number_aux(-n));
		if (result == -1)
			return (-1);
		return (result + 1);
	}
	else
		return (write_number_aux(n));
}

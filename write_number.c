/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:01:16 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/26 17:33:18 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_number_aux(unsigned int number)
{
	int	result1;
	int	result2;

	if (number < 10)
		return (write_char(number + '0'));
	else
	{
		result1 = write_number_aux(number / 10);
		if (result1 == -1)
			return (-1);
		result2 = write_number_aux(number % 10);
		if (result2 == -1)
			return (-1);
		return (result1 + result2);
	}
}

int	write_number(int number)
{
	int	result;

	if (number < 0)
	{
		if (write_char('-') == -1)
			return (-1);
		result = (write_number_aux(-number));
		if (result == -1)
			return (-1);
		return (result + 1);
	}
	else
		return (write_number_aux(number));
}

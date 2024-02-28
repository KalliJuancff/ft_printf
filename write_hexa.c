/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:41:26 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/28 17:15:35 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_hexa_digit(int digit, int uppercase)
{
	char	first_letter;

	first_letter = 'A';
	if (!uppercase)
		first_letter += 32;
	if (digit >= 10 && digit <= 15)
		return (write_char((digit - 10) + first_letter));
	return (write_char(digit + '0'));
}

static int	write_hexa_aux(unsigned long number, int uppercase)
{
	int	result1;
	int	result2;

	if (number <= 15)
		return (write_hexa_digit(number, uppercase));
	else
	{
		result1 = write_hexa_aux(number / 16, uppercase);
		if (result1 == -1)
			return (-1);
		result2 = write_hexa_aux(number % 16, uppercase);
		if (result2 == -1)
			return (-1);
		return (result1 + result2);
	}
}

int	write_hexa(long number, int uppercase)
{
	int	result;

	if (number < 0)
	{
		result = write_hexa_aux((unsigned int) number, uppercase);
		if (result == -1)
			return (-1);
		return (result);
	}
	else
		return (write_hexa_aux((unsigned int) number, uppercase));
}

int	write_pointer(unsigned long address)
{
	int	result1;
	int	result2;

	result1 = write_string("0x");
	if (result1 == -1)
		return (-1);
	result2 = write_hexa_aux(address, LOWERCASE);
	if (result2 == -1)
		return (-1);
	return (result1 + result2);
}

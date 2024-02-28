/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:48:16 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/28 17:03:06 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	write_string(char *string)
{
	int	result;

	result = 0;
	if (string == NULL)
		string = "(null)";
	while (string[result] != '\0')
	{
		if (write_char(string[result]) == -1)
			return (-1);
		result++;
	}
	return (result);
}

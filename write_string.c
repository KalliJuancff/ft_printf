/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:48:16 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/25 21:25:41 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

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

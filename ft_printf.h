/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:19:42 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/29 21:22:20 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define LOWERCASE 0
# define UPPERCASE 1

int	write_char(int character);
int	write_string(char *string);
int	write_number(long number);
int	write_hexa(unsigned int number, int uppercase);
int	write_pointer(unsigned long address);
int	ft_printf(char const *format, ...);

#endif

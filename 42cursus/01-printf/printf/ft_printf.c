/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:07:44 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/11 04:14:22 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_printselect(char c)
{
	if (c == 'c')
		return (ft_putchar);
	else if (c == 's')
		return (ft_putstr);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == "cspdiuxX" || format[i + 1] == 37)
			{
				i++;
				ft_printselect(format[i]);
			}
		}
		ft_putchar(format[i++]);
	}
	va_end(args);
}

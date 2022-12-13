/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:07:44 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/13 15:41:31 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	ret = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			ret += ft_printfselect(*(++format), args);
		else
			ret += ft_printfchar(*format);
		format++;
	}
	va_end(args);
	return (ret);
}

int	main(void)
{
	ft_printf("1- %c\n", '0');
	ft_printf("2- %c \n", '0');
	ft_printf("3- %c\n", '0' - 256);
	ft_printf("4- %c\n", '0' + 256);
	ft_printf("5- %c %c %c\n", '0', 0, '1');
	ft_printf("6-  %c$ %c$ %c$\n", ' ', '2', ' ');
	ft_printf("8- %c %c %c\n", '0', '1', 0);
	ft_printf("9- %c %c %c\n", 0, '1', '2');
}
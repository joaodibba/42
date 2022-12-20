/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfselect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:49:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/20 05:22:23 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfselect(char c, va_list args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_printfc(va_arg(args, int));
	else if (c == 's')
		ret += ft_printfs(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ret += ft_printfn(va_arg(args, int));
	else if (c == 'u')
		ret += ft_printfun(va_arg(args, unsigned int));
	else if (c == 'x')
		ret += ft_printflx(va_arg(args, int));
	else if (c == 'X')
		ret += ft_printfux(va_arg(args, int));
	else if (c == '%')
		ret += ft_printfc('%');
	return (ret);
}

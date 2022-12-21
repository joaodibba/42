/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfselect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:49:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/20 19:00:34 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfselect(char c, va_list args)
{
	if (c == 'c')
		return (ft_printfc(va_arg(args, int)));
	else if (c == 's')
		return (ft_printfs(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printfn(va_arg(args, int)));
	else if (c == 'u')
		return (ft_printfun(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_printflx(va_arg(args, int)));
	else if (c == 'X')
		return (ft_printfux(va_arg(args, int)));
	else if (c == 'p')
		return (ft_printfp(va_arg(args, unsigned long long)));
	else if (c == '%')
		return (ft_printfc('%'));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfselect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:49:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/19 16:49:43 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfselect(char c, va_list args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_printfchar(va_arg(args, int));
	else if (c == 's')
		ret += ft_printfstr(va_arg(args, char *));
	else if (c == '%')
		ret += ft_printfchar('%');
	return (ret);
}

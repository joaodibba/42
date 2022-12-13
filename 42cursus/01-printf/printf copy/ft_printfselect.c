/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfselect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:49:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/13 12:50:40 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfselect(char c, va_list args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_printfchar(va_arg(args, int));
	else if (c == 's')
		ret += ft_printfstr(va_arg(args, char *));
	return (ret);
}

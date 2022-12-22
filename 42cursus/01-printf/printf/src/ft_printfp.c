/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:39:50 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/22 16:34:02 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfp(unsigned long long n)
{
	if (n == 0)
		return (ft_printfs("(nil)"));
	return (ft_printfs("0x") + ft_printflx(n));
}

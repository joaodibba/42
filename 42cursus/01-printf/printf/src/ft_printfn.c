/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:15:06 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/22 14:59:57 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfn(int n)
{
	if (n == INT_MIN)
		return (ft_printfs("-2147483648"));
	if (n < 0)
		return (ft_printfc('-') + ft_printfn(-n));
	if (n < 10)
		return (ft_printfc(n + 48));
	return (ft_printfn(n / 10) + ft_printfc(n % 10 + 48));
}

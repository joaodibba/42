/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:43:01 by jalves-c          #+#    #+#             */
/*   Updated: 2023/01/10 15:00:13 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfx(unsigned long long n, char *base)
{
	if (n < 16)
		return (ft_printfc(base[n % 16]));
	return (ft_printfx(n / 16, base) + ft_printfc(base[n % 16]));
}

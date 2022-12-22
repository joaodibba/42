/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:43:01 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/22 15:57:26 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printflx(unsigned long long n)
{
	if (n < 16)
		return (ft_printfc(HEXMIN[n % 16]));
	return (ft_printflx(n / 16) + ft_printfc(HEXMIN[n % 16]));
}

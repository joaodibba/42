/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:13:04 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/20 05:15:27 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfux(unsigned int n)
{
	if (n < 16)
		return (ft_printfc(HEXMAX[n % 16]));
	return (ft_printfux(n / 16) + ft_printfc(HEXMAX[n % 16]));
}

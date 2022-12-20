/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:54:46 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/20 05:18:20 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfun(unsigned int n)
{
	if (n < 10)
		return (ft_printfc((char)(n % 10 + 48)));
	return (ft_printfun(n / 10) + ft_printfc((char)(n % 10 + 48)));
}

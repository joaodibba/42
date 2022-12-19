/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:15:06 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/19 17:35:53 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printfnbr(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
		ret += ft_printfchar('-');
	if (n > 9)
		ret += ft_printfnbr(n / 10);
	ret += ft_printfchar((char)(n % 10 - 48));
}

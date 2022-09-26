/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:52:35 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/26 23:41:12 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483647 && nb <= 2147483647)
	{
		if (nb < 0)

		asdasda
		{
			nb = -nb;
			ft_putchar('-');a
			ft_putnbr(nb);
		}
		else if (nb <= 9)
		{
			ft_putchar(nb + 48);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483646);
	return (0);
}*/

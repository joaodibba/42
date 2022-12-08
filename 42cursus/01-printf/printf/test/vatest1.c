/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vatest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:53:28 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/07 18:22:26 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>


void	fun(int total, ...)
{
	va_list	n_arg;
	int		n;
	int		n1;

	va_start(n_arg, total);

	n = va_arg(n_arg, int);
	n1 = va_arg(n_arg, int);
	printf("%d", n);
//	printf("%d", n1);
	printf("%d", va_arg(n_arg, int));
}

int	main(void)
{
	fun(3, 10, 20, 30, 90);
}

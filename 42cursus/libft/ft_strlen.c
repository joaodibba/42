/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibba <dibba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:52:13 by dibba             #+#    #+#             */
/*   Updated: 2022/10/27 16:00:08 by dibba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		i++;
	return (i);
}

int main(int ac,char **av)
{
	if (ac == 2)
		printf("length: %d\n",ft_strlen(av[1]));
	return (0);
}
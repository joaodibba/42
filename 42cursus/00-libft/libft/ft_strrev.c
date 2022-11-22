/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:00:18 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/16 19:57:51 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	swap;

	i = 0;
	size = ft_strlen(str) - 1;
	while (size > i)
	{
		swap = str[i];
		str[i] = str[size];
		str[size] = swap;
		size--;
		i++;
	}
	return (str);
}

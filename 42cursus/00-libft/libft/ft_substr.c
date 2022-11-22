/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:26 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/15 20:00:55 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strlen;

	strlen = (size_t)ft_strlen(s);
	if (start >= strlen)
		str = malloc(1);
	else if (len >= strlen)
		str = (char *)malloc(strlen - start + 1);
	else
		str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (strlen > start && str)
	{
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = 0;
	return (str);
}

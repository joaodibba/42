/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:53:57 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/01 13:13:07 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	if (size == 0)
		return (0);
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[i + dest_len] = src[i];
			i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}

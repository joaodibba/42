/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:54:38 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/11 20:50:29 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{	
	size_t	len;
	size_t	i;

	len = ft_strlen(source);
	i = 0;
	if (size > 0)
	{
		while (*source && i < (size - 1))
		{
			*dest++ = *source++;
			i++;
		}
		*dest = '\0';
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:33:50 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/10 23:53:29 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (!dst && !src)
		return (dst);
	else if (dst > src)
		while (i-- > 0)
			((char *)dst)[i] = ((char *)src)[i];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

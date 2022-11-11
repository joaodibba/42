/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:33:50 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/11 00:16:21 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (dst);
	else if (dst > src)
		while (n-- > 0)
			((char *)dst)[n] = ((char *)src)[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

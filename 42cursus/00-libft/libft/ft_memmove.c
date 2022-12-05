/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:56:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/05 16:56:09 by jalves-c         ###   ########.fr       */
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

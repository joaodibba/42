/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:59:32 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/01 19:35:16 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	strsize;

	strsize = ft_strlen(s) + 1;
	d = (char *)malloc(strsize);
	if (!d)
		return (0);
	ft_memcpy(d, s, strsize);
	d[strsize] = 0;
	return (d);
}

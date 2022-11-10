/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:59:32 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/10 17:19:13 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	strsize;

	strsize = ft_strlen(s);
	d = (char *)malloc(strsize + 1);
	if (!d)
		return (NULL);
	ft_memcpy(d, s, strsize + 1);
	d[strsize + 1] = 0;
	return (d);
}

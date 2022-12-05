/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:26 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/03 02:07:02 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (strlen < len)
		str = (char *)malloc(sizeof(char) * (strlen + 1));
	else if (start > strlen)
		str = (char *)malloc(1);
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else if (start > ft_strlen(s))
		str = (char *)malloc(1);
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

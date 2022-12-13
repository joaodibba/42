/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:35:08 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/12 14:40:59 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && ((char)c != *str))
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (0);
}

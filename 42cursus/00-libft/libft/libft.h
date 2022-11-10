/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:21:27 by jalves-c          #+#    #+#             */
/*   Updated: 2022/11/10 22:40:32 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int x);
int		ft_isalpha(int x);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *s);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strchr(const char *str, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
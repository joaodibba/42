/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:13:19 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/20 05:17:02 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXMIN "0123456789abcdef"
# define HEXMAX "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printfc(char c);
int		ft_printfselect(char c, va_list args);
int		ft_printfs(char *str);
int		ft_strlen(const char *str);
int		ft_printfn(int n);
int		ft_printfun(unsigned int n);
int		ft_printflx(unsigned int n);
int		ft_printfux(unsigned int n);
int		ft_printfp(unsigned long int num);

#endif

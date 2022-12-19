/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:55:12 by jalves-c          #+#    #+#             */
/*   Updated: 2022/12/19 17:05:56 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;
	int		x;
	int		*ptr;
	char	*str;

	c = 'a';
	x = 123;
	ptr = &x;
	str = "azAZ123";
	printf("NO FORMAT: azAZ123\n");
	printf("%% FORMAT: %%\n");
	printf("%%c FORMAT: %c\n", c);
	printf("%%s FORMAT: %s\n", str);
	printf("%%p FORMAT: %p\n", ptr);
	printf("%%d FORMAT: %d\n", x);
	printf("%%i FORMAT: %i\n", x);
}

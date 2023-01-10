/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c < jalves-c@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:09:57 by jalves-c          #+#    #+#             */
/*   Updated: 2023/01/10 15:10:06 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	ret = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			ret += ft_printfselect(*(++format), args);
		else
			ret += ft_printfc(*format);
		format++;
	}
	va_end(args);
	return (ret);
}

/*
#include <time.h>
int main(void)
{
clock_t begin = clock();
char i = 's';
char i2[20] = "Hello World";
int i3 = 34;
int i4 = -23;
int *i5 = &i3;
printf("Printf char: %c\n", i);
ft_printf("Ft_Printf char: %c\n\n", i);

printf("Printf string: %s\n", i2);
ft_printf("Ft_Printf string: %s\n\n", i2);

printf("Printf percent: %%\n");
ft_printf("Ft_Printf percent: %%\n\n");

printf("Printf integer: %d || %i\n", i3, i4);
ft_printf("Ft_Printf integer: %d || %i\n\n", i3, i4);

printf("Printf pointer: %p\n", &i5);
ft_printf("Ft_Printf pointer: %p\n\n", &i5);

printf("Printf unsigned number: %u\n", i3);
ft_printf("Ft_Printf unsigned number: %u\n\n", i3);

printf("Printf number in hexadecimal: %x\n", i);
ft_printf("Ft_Printf number in hexadecimal: %x\n\n", i);

printf("Printf number in hexadecimal(UP): %X\n", i);
ft_printf("Ft_Printf number in hexadecimal(UP): %X\n\n", i);

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\n total time taken: %lf \n", time_spent);
return (0);
}
*/
>>>>>>> Stashed changes

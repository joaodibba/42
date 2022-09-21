/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:51:10 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/20 22:54:10 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	ft_strcmp(char *s1,char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{	
		i++;
	}
	return (s2[i] - s1[i]);
}

/*int main(void) {
  char str1[] = "teste", str2[] = "teste";
  printf("Result: %d\n", ft_strcmp(str1, str2));
  printf("Expected outcome: %d \n", strcmp(str1, str2));
  return (0);
}*/
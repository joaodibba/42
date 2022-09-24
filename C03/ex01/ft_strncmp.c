/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:58:04 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/24 18:43:07 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n && s1[1] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s2[i] - s1[i]);
}

/*
int	main(void)
{
  char str1[] = "teste", str2[] = "teste";
  printf("Result: %d\n", ft_strncmp(str1, str2, 5));
  printf("Expected outcome: %d \n", strncmp(str1, str2, 5));
  return (0);
}
*/
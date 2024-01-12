/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:37:59 by otodd             #+#    #+#             */
/*   Updated: 2023/10/23 11:30:42 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (ft_strlen(dest) != ft_strlen(src))
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*mem;

	mem = malloc(sizeof(char *) * ft_strlen(src) + 1);
	return (ft_strcpy(mem, src));
}
/*
int	main(void)
{
	char	test[] = "this is a test string";
	char	*test2;

	test2 = ft_strdup(test);
	printf("Src: %s\nDup: %s\n", test, test2);
	return (0);
}*/

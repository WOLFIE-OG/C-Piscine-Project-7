/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:33:24 by otodd             #+#    #+#             */
/*   Updated: 2023/10/23 12:45:29 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
// #include <limits.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	index = 0;
	while (min < max)
		range[index++] = min++;
	return (range);
}
/*
int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	index;

	index = 0;
	min = 0;
	max = 0;
	array = ft_range(min, max);
	while (min <= max)
	{
		printf("%d, ", array[index++]);
		min++;
	}
	free(array);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:15:14 by otodd             #+#    #+#             */
/*   Updated: 2023/10/24 12:26:59 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	index = 0;
	while (min < max)
		(*range)[index++] = min++;
	return (index);
}
/*
void test_ft_ultimate_range(int min, int max) {
	int *range = NULL;
	int size = ft_ultimate_range(&range, min, max);

	if (size == 0) {
		printf("Test failed: min = %d, max = %d, size = %d\n", min, max, size);
		free(range);
		return;
	}

	printf("Test passed: min = %d, max = %d, size = %d\n", min, max, size);

	// Print the values in the allocated array for demonstration purposes
	for (int i = 0; i < size; i++) {
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);
}

int main(void) {
	// Test cases: various ranges of integers
	test_ft_ultimate_range(1, 5);
	test_ft_ultimate_range(0, 0);
	test_ft_ultimate_range(-5, -1);
	test_ft_ultimate_range(10, 15);

	return 0;
}*/
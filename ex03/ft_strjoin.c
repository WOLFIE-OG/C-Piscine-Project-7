/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:13:52 by otodd             #+#    #+#             */
/*   Updated: 2023/10/26 10:13:53 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char *const	cat_string = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (cat_string);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

int	total_array_len(int size, char **strs, char *sep)
{
	int	total;
	int	index;

	index = 0;
	total = 0;
	while (index < size)
	{
		total += ft_strlen(strs[index]);
		index++;
	}
	total += (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*empty;
	char	*mem;
	int		index;

	index = 0;
	if (size <= 0)
	{
		empty = malloc(1);
		*empty = '\0';
		return (empty);
	}
	len = total_array_len(size, strs, sep);
	mem = malloc(sizeof(char) * len);
	mem[0] = '\0';
	while (index < size)
	{
		ft_strcat(mem, strs[index]);
		if (index < size - 1)
			ft_strcat(mem, sep);
		index++;
	}
	return (mem);
}
/*
int main(void)
{
    // Test 1: Empty Input Strings
    char *empty_strings[] = {NULL};
    char *result1 = ft_strjoin(0, empty_strings, ", ");
    printf("Test 1: %s\n", result1);
    free(result1);

    // Test 2: Empty Separator
    char *strings2[] = {"Hello", "world"};
    char *result2 = ft_strjoin(2, strings2, "");
    printf("Test 2: %s\n", result2);
    free(result2);

    // Test 3: Empty Separator and Empty Input Strings
    char *empty_separator[] = {NULL};
    char *result3 = ft_strjoin(0, empty_separator, "");
    printf("Test 3: %s\n", result3);
    free(result3);

    // Test 4: Input Strings Containing Null Characters
    char *strings4[] = {"Hello", "\0", "world"};
    char *result4 = ft_strjoin(3, strings4, ", ");
    printf("Test 4: %s\n", result4);
    free(result4);

    // Test 5: Single Input String
    char *strings5[] = {"Hello"};
    char *result5 = ft_strjoin(1, strings5, ", ");
    printf("Test 5: %s\n", result5);
    free(result5);

    // Test 6: Multiple Input Strings and Single Separator
    char *strings6[] = {"Hello", "world", "of", "programming"};
    char *result6 = ft_strjoin(4, strings6, " ");
    printf("Test 6: %s\n", result6);
    free(result6);

    // Test 7: Multiple Input Strings with Special Characters
    char *strings7[] = {"Programming", "is", "fun!"};
    char *result7 = ft_strjoin(3, strings7, " :-) ");
    printf("Test 7: %s\n", result7);
    free(result7);

    // Test 8: Very Large Input Strings
    char *large_strings[] = {
        "This is a very large input string. ", // Repeat to create a large input
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
        "This is a very large input string. ",
    };
    char *result8 = ft_strjoin(10, large_strings, " ||| ");
    printf("Test 8: Large Input Strings:\n%s\n", result8);
    free(result8);

    return 0;
}*/
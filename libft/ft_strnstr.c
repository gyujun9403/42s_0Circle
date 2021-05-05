/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:10:25 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/05 15:29:39 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*answer = NULL;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (*(haystack + i) && *(needle + j) && i + j < len)
	{
		if (*(haystack + i) == *needle)
			while (*(haystack + i + j) == *(needle + j) && i + j < len)
				if (*(needle + ++j) == '\0')
				{
					answer = (char *)haystack + i;
					i = len - 1;
					break;
				}
		i++;
		j = 0;
	}
	if (*needle == '\0')
		answer = (char *)haystack;
	return (answer);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "12345678901234567890";
	char arr2[] = "123456789012345678901";
	printf("%s\n", strnstr(arr, arr2, 100));
	printf("%s\n", ft_strnstr(arr, arr2, 100));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:33:52 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/04 17:40:49 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int i;

	i = 0;
	while (*(src + i) && (i + 1 < dstsize))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (dstsize > 0)
		*(dst + i) = '\0';
	while (*(src + i))
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "1234";
	char arr1[] = "1234";
	char arr2[] = "";
	printf("%lu\n", strlcpy(arr, arr2, 4));
	printf("%s\n\n", arr);
	printf("%zu\n", ft_strlcpy(arr1, arr2, 4));
	printf("%s\n\n", arr1);
}*/

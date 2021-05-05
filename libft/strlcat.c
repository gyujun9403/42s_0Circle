/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:43:53 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/04 18:42:27 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int index_src;
	int index_dst;
	int leng_dst;
	int leng_src;
	int leng_cat;
	int result;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	leng_cat = dstsize - leng_dst - 1;
	index_dst = leng_dst;
	index_src = 0;
	while (*(src + index_src) && (index_src < leng_cat))
		*(dst + index_dst++) = *(src + index_src++);
	*(dst + index_dst) = '\0';
	if (dstsize > leng_dst)
		result = leng_dst + leng_src;
	else
		result = dstsize + leng_src;
	return (result);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst1[20] = "1234";
	char dst2[20] = "1234";
	char src[] = "";

	printf("%zu   %s\n", ft_strlcat(dst1, src, 0), dst1);
	printf("%lu   %s\n", strlcat(dst2, src, 0), dst2);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:17:45 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 17:17:59 by gyeon            ###   ########.fr       */
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

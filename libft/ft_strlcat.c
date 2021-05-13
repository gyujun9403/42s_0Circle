/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:17:45 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/11 17:56:13 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t index_src;
	size_t index_dst;
	size_t leng_dst;
	size_t leng_src;
	size_t leng_cat;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	if (dstsize > leng_dst + 1)
		leng_cat = dstsize - leng_dst - 1;
	else
		leng_cat = 0;
	index_dst = leng_dst;
	index_src = 0;
	while (*(src + index_src) && (index_src < leng_cat))
		*(dst + index_dst++) = *(src + index_src++);
	*(dst + index_dst) = '\0';
	if (dstsize > leng_dst)
		return (leng_dst + leng_src);
	else
		return (dstsize + leng_src);
}

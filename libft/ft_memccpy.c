/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:05:59 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 17:06:12 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		if(*((char *)src + i++) == c)
			break;
	}
	return (dst);
}

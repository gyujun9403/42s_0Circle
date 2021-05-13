/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:05:59 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/12 10:08:19 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	void 	*result;

	i = 0;
	result = NULL:
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i++) == (unsigned char)c)
		{
			result = dst + i;
			break ;
		}
	}
	return (result);
}

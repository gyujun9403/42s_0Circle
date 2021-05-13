/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:09:29 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/12 20:37:19 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (dst == NULL && dest == NULL)
		;
	else 
	{
		while (n-- > 0)
			*(unsigned char *)(dst + n)
				= *(unsigned char *)(src + n);
	}
	return (dst);
}

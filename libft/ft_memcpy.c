/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:09:29 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 17:09:39 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n-- > 0)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}

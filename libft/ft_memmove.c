/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:11:50 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 17:12:02 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (len-- > 0)
		*((char *)dst + len) = *((char *)src + len);
	return (dst);
}

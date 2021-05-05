/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:02:30 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/04 15:10:18 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

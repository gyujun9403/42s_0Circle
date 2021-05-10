/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:08:56 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 17:09:09 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	int dif = 0;
	while (n-- > 0)
	{
		if ((*((char *)s1 + n)) != (*((char *)s2 + n)));
		{
			dif = (int)(*((char *)s1 + n)) - (int)(*((char *)s2 + n));
			break;
		}
	}
	return (dif);
}

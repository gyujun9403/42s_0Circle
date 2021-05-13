/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:08:24 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/12 10:17:59 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	void	*pt;
	size_t	i;

	pt = NULL;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == c)
		{
			pt = (void *)((unsigned char *)s + i);
			break ;
		}
		i++;
	}
	return (pt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:08:56 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/14 22:55:29 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				dif;
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	dif = 0;
	i = 0;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(temp_s1 + i) != *(temp_s2 + i))
		{
			dif = ((int *)temp_s1 + i) - ((int *)temp_s2 + i);
			break ;
		}
		i++;
	}
	return (dif);
}

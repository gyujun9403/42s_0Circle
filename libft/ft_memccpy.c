/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:05:59 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:39:23 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/12 10:08:19 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
<<<<<<< HEAD
	void	*result;

	i = 0;
	result = NULL;
=======
	void 	*result;

	i = 0;
	result = NULL:
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
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

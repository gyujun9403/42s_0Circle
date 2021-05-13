/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:09:29 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:51:30 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/12 20:37:19 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
<<<<<<< HEAD
	if (dst == NULL && src == NULL)
		;
	else
	{
		while (n-- > 0)
			*(unsigned char *)(dst + n) =
				*(unsigned char *)(src + n);
=======
	if (dst == NULL && dest == NULL)
		;
	else 
	{
		while (n-- > 0)
			*(unsigned char *)(dst + n)
				= *(unsigned char *)(src + n);
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:08:56 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:50:59 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/12 10:24:02 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				dif;
<<<<<<< HEAD
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	dif = 0;
	i = 0;
=======
	size_t			index;
	unsigned char	temp_s1;
	unsigned char	temp_s2;

	dif = 0;
	index = 0;
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(temp_s1 + i) != *(temp_s2 + i))
		{
<<<<<<< HEAD
			dif = ((int *)temp_s1 + i) - ((int *)temp_s2 + i);
=======
			dif = (int)*(temp_s1 + i) - (int)*(temp+s2 + i);
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
			break ;
		}
		i++;
	}
	return (dif);
}

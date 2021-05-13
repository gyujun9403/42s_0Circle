/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:18:54 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 20:50:27 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 14:06:32 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	leng;
	char	*result;

	result = NULL;
	leng = ft_strlen(s);
	while (leng)
	{
		if (*(s + leng) == (unsigned char)c)
		{
<<<<<<< HEAD
			result = (char *)s + leng;
=======
			result = (char *)s + leng + 1;
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
			break ;
		}
		leng--;
	}
	if (*s == (unsigned char)c && result == NULL)
		result = (char *)s;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:42:45 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:57:07 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 14:08:24 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	index;
	char	*pt;

	index = 0;
	pt = NULL;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		pt = (char *)malloc(sizeof(char) * len);
		if (pt != NULL)
		{
			while (index < len)
			{
				*(pt + index) = f(index, *(s + index));
				index++;
			}
			*(pt + index) = '\0';
		}
	}
	return (pt);
}

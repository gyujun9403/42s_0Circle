/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:59:03 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:58:34 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 17:57:39 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
<<<<<<< HEAD
=======
	size_t	i;
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3

	if (s == NULL)
		pt = NULL;
	else
	{
		if (ft_strlen(s) < start + len + 1)
			pt = ft_calloc(1, sizeof(char));
		else
		{
			pt = (char *)malloc(sizeof(char) * len + 1);
			if (pt != NULL)
				ft_strlcpy(pt, s + start, len + 1);
		}
	}
	return (pt);
}

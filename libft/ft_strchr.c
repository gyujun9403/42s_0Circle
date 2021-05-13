/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 10:43:21 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:34:02 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 17:50:05 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
<<<<<<< HEAD
	size_t	i;
	char	*answer;

	i = 0;
	answer = NULL;
	while (*(s + i) == '\0')
	{
		if (*(s + i) == (unsigned char)c)
		{
			answer = (char *)s + i;
			break ;
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		answer = (char *)s + i;
	return (answer);
=======
	size_t i;

	i = 0;
	while (*(s + i))
		if (*(s + i++) == (unsigned char)c)
			break ;
	return ((char *)s + i);
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:18:54 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/11 14:06:32 by gyeon            ###   ########.fr       */
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
		if (*(s + leng--) == (unsigned char)c)
		{
			result = (char *)s + leng + 1;
			break ;
		}
	return (result);
}

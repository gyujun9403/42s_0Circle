/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:59:03 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/14 23:00:54 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;

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

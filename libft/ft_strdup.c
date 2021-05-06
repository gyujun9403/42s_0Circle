/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:52:07 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/06 19:55:07 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s1)
{
	char *pt;
	size_t len;

	len = ft_strlen(s1);
	pt = (char *)malloc(sizeof(char) * len + 1);
	while (len >= 0)
	{
		*(pt + len) = *(s1 + len);
		len--;
	}
	return (pt);
}

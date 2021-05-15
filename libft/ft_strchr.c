/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 10:43:21 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/15 14:19:36 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*answer;

	i = 0;
	answer = NULL;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (unsigned char)c)
		{
			answer = (char *)s + i;
			break ;
		}
		i++;
	}
	if (*(s + i) == '\0' && (unsigned char)c == '\0')
		answer = (char *)s + i;
	return (answer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:10:25 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/11 13:40:24 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*answer;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	answer = NULL;
	while (*(haystack + i) && *(needle + j) && i + j < len)
	{
		if (*(haystack + i) == *needle)
			while (*(haystack + i + j) == *(needle + j) && i + j < len)
				if (*(needle + ++j) == '\0')
				{
					answer = (char *)haystack + i;
					i = len - 1;
					break ;
				}
		i++;
		j = 0;
	}
	if (*needle == '\0')
		answer = (char *)haystack;
	return (answer);
}

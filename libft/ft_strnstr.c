/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:10:25 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/16 21:17:51 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*answer;
	char	flg;
	size_t	i;
	size_t	j;

	i = 0;
	flg = 0;
	answer = NULL;
	while (*(haystack + i) && i < len && flg != 1)
	{
		j = 0;
		if (*(haystack + i) == *needle)
			while (*(haystack + i + j) == *(needle + j) && i + j < len)
				if (*(needle + ++j) == '\0')
				{
					answer = (char *)haystack + i;
					flg = 1;
					break ;
				}
		i++;
	}
	if (*needle == '\0')
		answer = (char *)haystack;
	return (answer);
}

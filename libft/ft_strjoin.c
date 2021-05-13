/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:41:24 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:38:53 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 14:01:23 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;
<<<<<<< HEAD
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL && s2 == NULL)
		pt = NULL;
	else if (s1 == NULL)
		pt = ft_strdup(s2);
	else if (s2 == NULL)
		pt = ft_strdup(s1);
	else
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		pt = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
		if (pt != NULL)
		{
			ft_strlcpy(pt, s1, len_s1);
			ft_strlcat(pt, s2, len_s1 + len_s2 - 1);
		}
=======
	size_t	index_s1;
	size_t	index_s2;
	size_t	len_s1;
	size_t	len_s2;

	index_s1 = 0;
	index_s2 = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	pt = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	while (index_s1 < len_s1)
	{
		*(pt + index_s1) = *(s1 + index_s1);
		index_s1++;
	}
	while (index_s2 < len_s2)
	{
		*(pt + index_s1 + index_s2) = *(s2 + index_s2);
		index_s2++;
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
	}
	return (pt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:40:04 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 22:57:46 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 14:14:39 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			find_lastindex(char const *s)
{
	size_t len;

	len = 0;
	while (*(s + len))
		len++;
	return ((len == 0) ? (0) : (len - 1));
}

unsigned char	check_trimable(char c, char const *set)
{
	unsigned char flg;

	flg = 0;
	while (*set)
		if (*(set++) == c)
		{
			flg = 1;
			break ;
		}
	return (flg);
}

/*
** flg_fr[0] : flag of front
** flg_fr[1] : flag of rear
** index_sf[0] : starting index of s to copy
** index_sf[1] : finishing index of s to copy
*/

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	flg_fr[2];
<<<<<<< HEAD
	size_t			i_last;
	size_t			i_pt;
	char			*pt;

	if (s1 == NULL)
		pt = NULL;
	else if (set == NULL)
		pt = ft_strdup(s1);
	else
	{
		i_last = find_lastindex(s1);
		flg_fr[0] = check_trimable(*s1, set);
		flg_fr[1] = check_trimable(*(s1 + i_last), set);
		pt = (char *)malloc(sizeof(char) *
				(i_last + 2 - flg_fr[0] - flg_fr[1]));
		if (pt != NULL)
		{
			i_pt = 0;
			ft_strlcpy(pt, s1 + flg_fr[0], i_last + 1 - flg_fr[1]);
		}
=======
	size_t			index_last;
	size_t			index_pt;
	size_t			index_sf[2];
	char			*pt;

	index_last = find_lastindex(s1);
	flg_fr[0] = check_trimable(*s1, set);
	flg_fr[1] = check_trimable(*(s1 + index_last), set);
	pt = (char *)malloc(sizeof(char) * (index_last + 1) + 1
			- flg_fr[0] - flg_fr[1]);
	if (pt != NULL)
	{
		index_pt = 0;
		index_sf[0] = flg_fr[0];
		index_sf[1] = index_last - flg_fr[1];
		while (index_sf[0] <= index_sf[1])
			*(pt + index_pt++) = *(s1 + index_sf[0]++);
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
	}
	return (pt);
}

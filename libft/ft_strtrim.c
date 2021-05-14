/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:40:04 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/14 23:00:32 by gyeon            ###   ########.fr       */
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
	}
	return (pt);
}

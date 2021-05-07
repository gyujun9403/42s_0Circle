/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:40:04 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/07 12:50:30 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t find_lastIndex(char const *s)
{
	size_t len;

	len = 0;
	while (*(s + len))
		len++;
	return ((len == 0) ? (0) : (len - 1));
}

unsigned char check_trimable(char c, char const *set)
{
	unsigned char flg;

	flg = 0;
	while (*set)
		if (*(set++) == c)
		{
			flg = 1;
			break;
		}
	return (flg);
}

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned char flg_Front;
	unsigned char flg_Rear;
	size_t lastIndex;
	size_t index_pt;
	size_t index_st;
	size_t index_fin;
	char *pt;

	lastIndex = find_lastIndex(s1);
	flg_Front = check_trimable(*s1, set);
	flg_Rear = check_trimable(*(s1 + lastIndex), set);
	pt = (char *)malloc(sizeof(char) * (lastIndex + 1) + 1 
			- flg_Front - flg_Rear);
	if (pt != NULL)
	{
		index_pt = 0;
		index_st = flg_Front;
		index_fin = lastIndex - flg_Rear;
		while (index_st <= index_fin)
			*(pt + index_pt++) = *(s1 + index_st++);
	}
	return (pt);
}

#include <stdio.h>
int main (int ac, char **av)
{
	char *pt;
	if (ac != 3)
	{
		pt = ft_strtrim("\n23871\t", "\n");
	}
	else
	{
		pt = ft_strtrim(av[1], av[2]);
	}
	printf("%s\n", pt);
	free(pt);
}

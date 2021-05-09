/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:16:22 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/08 20:32:13 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t cnt_row (char const *s, char c)
{
	size_t num_row;

	num_row = 0;
	while (*s)
	{
		if (*s && (*s == c))
		{
			while (*s && (*s == c))
				s++;
		}
		else
		{
			while (*s && (*s != c))
				s++;
			num_row++;
		}
	}

	return num_row;
}

void find_StEnd(char const *s, char c, size_t *SStEnd)
{
	size_t index_s;
	
	while (*(s + SStEnd[0]) && *(s + SStEnd[0]) == c)
		index_s++;
	index_StEnd[0] = index_s;
	while (*(s + index_s) && *(s + index_s) != c)
		index_s++;
	index_StEnd[1] = index_s;
}

char **ft_split(char const *s, char c)
{
	char **pt;
	unsigned char err_flg;
	size_t num_row;
	size_t index_row;
	size_t index_pt;char **ft_split(char const *s, char c)
	size_t SStEnd[3];
	
	SStEnd[0] = 0;
	err_flg = 0;
	num_row = cnt_row(s, c);
	pt = (char **)malloc((num_row + 1) * sizeof(char *));
	if (pt == NULL)
		err_flg = 1;
	while (index_row < num_row && err_flg == 0)
	{	
		index_pt = 0;
		find_StEnd(*s, c, StEnd);
		*(pt + index_row) = 
			(char *)malloc((StEnd[2] - StEnd[1] + 1) * sizeof(char));
		if (*(pt + index_row) == NULL)
		{
			err_flg = 1;
			break;
		}
		while (index_st < index_end)
			*(*(pt + index_row) + index_pt++) = *(s + index_st++);
		*(*(pt + index_row) + index_pt) = '\0';
		index_row++;
	}
	if (err_flg == 1 && index_row > 0)
	{
		while (index_row >= 0)
			free(*(pt + index_row--));
		free(pt);
		pt = NULL;
	}
	if (err_flg == 0)
		*(pt + index_row) = NULL;
	return (pt);
}

#include <stdio.h>
int main(int ac, char **av)
{
	char **pt;
	int i = 0;
	if (ac == 3)
	{
		pt = ft_split(av[1], av[2][0]);
		while (*(pt + i))
			printf("%s\n", *(pt + i++));
	}
	return 0;
}

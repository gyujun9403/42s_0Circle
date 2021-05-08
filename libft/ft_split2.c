/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 20:40:52 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/07 23:59:13 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void cnt_s(char const *s, char c, size_t *cnt)
{
	size_t index_s;
	size_t cnt_row;
	size_t cnt_col;
	
	index_s = 0;
	cnt_row = 0;
	cnt_col = 0;
	while (*(s + index_s))
	{
		if (*(s + index_s) == c)
		{
			while (*(s + index_s) == c && *(s + index_s))
				index_s++;
			cnt_row++;
		}
		else
			while (*(s + index_s) != c && *(s + index_s))
			{
				index_s++;
				cnt_col++;
			}
	}
	cnt[0] = cnt_row;
	cnt[1] = cnt_col;
}

/**
 ** cnt[0] : row count
 ** cnt[1] : total collum count;
 */
char **ft_split(char const *s, char c)
{
	unsigned char err_flg;
	size_t index_s;
	size_t index_row;
	size_t index_col;
	size_t cnt[2];
	char **pt;

	err_flg = 0;
	cnt_s(s, c, cnt);
	while (1)
	{
		pt = (char **)malloc(sizeof(char *) * (cnt[0] + 1));
		if (pt == NULL)
		{
			err_flg = 1;
			break;
		}
		*pt = (char *)malloc(sizeof(char) * (cnt[1] + cnt[0] + 1));
		if (*pt == NULL)
		{
			err_flg = 1;
			free(pt);
			pt = NULL;
			break;
		}
		index_s = 0;
		index_row = 0;
		while (index_row < cnt[0])
		{
			index_col = 0;
			if (*(s + index_s) == c && *(s + index_s))
				while (*(s + index_s) == c && *(s + index_s))
					index_s++;
			else
				while (*(s + index_s) != c && *(s + index_s))
					*(*(pt + index_row) + index_col++) = *(s + index_s++);
			*(*(pt + index_row) + index_col++) = '\0';
			index_row++;
			*(pt + index_row) = *(pt + index_row) + index_col;
		}
		break;
	}

	return (pt);
}

#include <stdio.h>
int main (int ac, char **av)
{
	size_t cnt[2];
	size_t i = 0;
	char **pt;
	pt = ft_split(av[1], av[2][0]);
	while (*(pt + i))
		printf("%s\n", *(pt + i++));
	
	return (0);
}

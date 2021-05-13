/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:49:24 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/11 14:36:04 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char	*pt;
	size_t	index;

	index = 0;
	pt = (char *)malloc(sizeof(char) * (n + 1));
	while (index < n)
	{
		*(pt + index) = *(s + index);
		index++;
	}
	*(pt + index) = '\0';
	return (pt);
}

size_t	cnt_row(char const *s, char c)
{
	size_t cnt_row;
	size_t index_s;
	size_t index_st;

	index_s = 0;
	cnt_row = 0;
	while (*(s + index_s))
	{
		while (*(s + index_s) && *(s + index_s) == c)
			index_s++;
		index_st = index_s;
		while (*(s + index_s) && *(s + index_s) != c)
			index_s++;
		if (index_st < index_s)
			cnt_row++;
	}
	return (cnt_row);
}

void	err_free(char **pt, size_t index_row)
{
	size_t index;

	index = 0;
	while (index < index_row)
		free(*(pt + index));
	free(pt);
	pt = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	index_s;
	size_t	index_st;
	size_t	index_row;
	char	**pt;

	pt = (char **)malloc(sizeof(char *) * (cnt_row(s, c) + 1));
	index_s = 0;
	index_row = 0;
	while (*(s + index_s) && pt != NULL)
	{
		while (*(s + index_s) && *(s + index_s) == c)
			index_s++;
		index_st = index_s;
		while (*(s + index_s) && *(s + index_s) != c)
			index_s++;
		if (index_s > index_st)
		{
			*(pt + index_row) = ft_strndup(s + index_st, index_s - index_st);
			if (*(pt + index_row++) == NULL)
				err_free(pt, index_row - 1);
		}
	}
	if (pt != NULL)
		*(pt + index_row) = NULL;
	return (pt);
}

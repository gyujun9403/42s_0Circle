/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 20:41:24 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/07 11:39:30 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *pt;
	size_t index_s1;
	size_t index_s2;
	size_t len_s1;
	size_t len_s2;
	
	index_s1 = 0;
	index_s2 = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	pt = (char *)malloc(sizeof(char)*(len_s1 + len_s2) + 1);
	while (index_s1 < len_s1)
	{
		*(pt + index_s1) = *(s1 + index_s1);
		index_s1++;
	}
	while (index_s2 < len_s2)
	{
		*(pt + index_s1 + index_s2) = *(s2 + index_s2);
		index_s2++;
	}
	return (pt);
}
/*

#include <stdio.h>
int main(int ac, char **av)
{
	char *pt;
	if (ac != 3)
	{
		pt = ft_strjoin("\n", "edfs");
		printf("%s\n", pt);
	}
	else
	{
		pt = ft_strjoin(av[1], av[2]);
		printf("%s\n", pt);
	}
	free(pt);
}*/

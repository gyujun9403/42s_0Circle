/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:17:30 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/16 20:47:24 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	cnt_digit(unsigned int num)
{
	short cnt;

	cnt = (num == 0) ? (1) : (0);
	while (num)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	short			sign;
	short			index_digit;
	short			index_st;
	char			*pt;

	sign = 1;
	index_st = 0;
	if (n < 0)
	{
		sign = -1;
		num = -n;
	}
	else
		num = n;
	index_digit = (sign > 0) ? (cnt_digit(num) - 1) : (cnt_digit(num));
	pt = (char *)ft_calloc(index_digit + 2, sizeof(char));
	if (sign == -1 && pt != NULL)
		*(pt + index_st++) = '-';
	while (index_digit >= index_st && pt != NULL)
	{
		*(pt + index_digit--) = num % 10 + '0';
		num /= 10;
	}
	return (pt);
}

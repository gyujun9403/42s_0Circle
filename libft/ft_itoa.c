/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:17:30 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/11 17:00:19 by gyeon            ###   ########.fr       */
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
	short			digit;
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
	digit = (sign > 0) ? (cnt_digit(num) - 1) : (cnt_digit(num));
	pt = (char *)ft_calloc(digit + 1, sizeof(char));
	if (sign == -1 && pt != NULL)
		*(pt + index_st++) = '-';
	while (digit >= index_st && pt != NULL)
	{
		*(pt + digit--) = num % 10 + '0';
		num /= 10;
	}
	return (pt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:17:30 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/09 23:30:52 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short cnt_digit(unsigned int num)
{
	short cnt;

	(num == 0) ? (cnt = 1) : (cnt = 0);
	while (num)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char *ft_itoa(int n)
{
	unsigned int num;
	int sign;
	short digit;
	short index_st;
	char *pt;
	
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		num = -n;
	}
	else
		num = n;
	digit = (sign > 0) ? (cnt_digit(num)) : (cnt_digit(num) + 1);
	pt = (char *)malloc(sizeof(char) * digit + 1);
	index_st = 0;
	if (sign == -1)
		*(pt + index_st++) = '-';
	*(pt + digit--) = '\0';
	while (digit >= index_st)
	{
		*(pt + digit--) = num % 10 + '0';
		num /= 10;
	}
	return (pt);

}
#include <stdio.h>
int main(int ac, char **av)
{
	int num;
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		printf("%s\n", ft_itoa(num));
	}
}

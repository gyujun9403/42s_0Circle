/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:46:30 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/05 01:05:10 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{	
	int i;

	i = 0;
	while (i < len)
		*((unsigned char *)b + i++) = (unsigned char)c;

	return b;
}

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	int arr[100];
	bzero(arr, 100);
	ft_memset(arr, 10, 10);
	while (i < 10)
		printf("%x ", arr[i++]);
}

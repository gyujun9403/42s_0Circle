/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:55:47 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/03 23:59:58 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	/*int a[5] = {1, 2, 3, 4, 5};
	//memset(a, 0, 3 * sizeof(int));
	bzero(a, sizeof(int) * 3);
	for (int i = 0; i < 5; i++)
		printf("%d", a[i]);*/
	char arr[100];
	bzero(arr, 100);
	arr[0] = 1;
	arr[1] = 4;
	arr[2] = 61;
	arr[3] = 0;
	arr[4] = 3;
	arr[5] = 7;
	arr[6] = 1;
	arr[7] = 1;
	arr[8] = 0;
	arr[9] = 0;
	arr[10]= 1;
	printf("%ld\n", (char *)memchr(arr, 3, 10) - arr);
	printf("%d\n", *(int *)(arr + 6));
	printf("%ld\n", (char *)memchr(arr, 61, 10) - arr);
	return (1);
}

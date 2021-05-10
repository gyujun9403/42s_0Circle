/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:44:41 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 12:48:43 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *pt;
	size_t index;

	index = 0;
	pt = ft_itoa(n);
	while (*(pt + index))
		write(fd, pt + index, sizeof(char));
	free(pt);
}

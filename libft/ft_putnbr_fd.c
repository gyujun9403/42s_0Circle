/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:44:41 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/13 16:17:20 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(int n, int fd)
{
	if (n < 10)
		write(fd, &("0123456789"[n]), sizeof(char));
	else
	{
		print_num(n / 10, fd);
		write(fd, &("0123456789"[n % 10]), sizeof(char));
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		;
	else 
	{
		if (n == -2147483648)
			write(fd, "-2147483648", sizeof(char) * 11);
		else if (n < 0)
		{
			write(fd, "-", sizeof(char));
			print_num(-n, fd);
		}
		else
			print_num(n, fd);
	}
}

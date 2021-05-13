/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:55:16 by gyeon             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/13 16:28:57 by gyeon            ###   ########.fr       */
=======
/*   Updated: 2021/05/11 12:34:31 by gyeon            ###   ########.fr       */
>>>>>>> 5cfe6aace1a6ef4b3d36b21c7f68241bdda79be3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		;
	else
	{
		while (*s)
			write(fd, s++, sizeof(char));
	}
}

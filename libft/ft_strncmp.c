/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:01:20 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/15 15:17:35 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				answer;
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	i = 0;
	answer = 0;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(temp_s1 + i) != *(temp_s2 + i))
		{
			answer = (int)(*(temp_s1 + i)) - (int)(*(temp_s2 + i));
			break ;
		}
		i++;
	}
	return (answer);
}

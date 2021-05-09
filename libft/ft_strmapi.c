/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:42:45 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 00:57:01 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	index;
	char	*pt;

	index = 0;
	len = ft_strlen(s);
	pt = (char *)malloc(sizeof(char) * len);
	while (index < len && pt != NULL)
	{
		*(pt + index) = f(index, *(s + index));
		index++;
	}
	if (pt != NULL)
		*(pt + index) = '\0';
	return (pt);
}

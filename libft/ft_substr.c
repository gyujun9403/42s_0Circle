/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:59:03 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/06 20:04:13 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *pt;
	size_t i;

	i = 0;
	pt = (char *)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		*(pt + i) = *(s + start + i);
		i++;
	}
	return (pt);
}

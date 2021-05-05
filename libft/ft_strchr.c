/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 10:43:21 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/05 10:49:13 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;
	int answer;

	i = 0;
	answer = 0;
	while (*(s + i))
		if (*(s + i++) == (unsigned char)c)
		{
			answer = i;
			break;
		}
	return (s + answer);
}

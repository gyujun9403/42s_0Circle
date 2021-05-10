/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:48:46 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 22:02:30 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		lst->content = f(lst->content);
		lst = lst->next;
	}
}

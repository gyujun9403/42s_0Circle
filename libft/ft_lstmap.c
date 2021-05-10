/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:03:39 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/10 23:03:00 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *new_st;
	
	new = ft_lstnew(f(lst->content));
	new_st = new;
	lst = lst->next;
	while (lst == NULL && new != NULL)
	{
		new->next = ft_lstnew(f(lst->content));
		if (new->next == NULL)
		{
			ft_lstclear(new_st);
			new_st = NULL;
			break;
		}
		new = new->next;
		lst = lst->next;
	}
	return (new_st);
}

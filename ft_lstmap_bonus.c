/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:42:59 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/30 13:05:23 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		current = ft_lstnew(NULL);
		if (!current)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		current->content = f(lst->content);
		ft_lstadd_back(&ret, current);
		lst = lst->next;
	}
	return (ret);
}

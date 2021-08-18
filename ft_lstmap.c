/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:01:56 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 22:39:24 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *tmp;
	t_list *curr;

	if (!lst || !f)
		return (0);
	head = 0;
	curr = lst;
	while (curr)
	{
		if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		tmp->content = (*f)(curr->content);
		tmp->next = 0;
		ft_lstadd_back(&head, tmp);
		curr = curr->next;
	}
	return (head);
}

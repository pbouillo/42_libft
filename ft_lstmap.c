/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:17:35 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 12:18:24 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_lst;
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	head = NULL;
	while (ptr != NULL)
	{
		new_lst = ft_lstnew(f(ptr->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_lst);
		ptr = ptr->next;
	}
	return (head);
}

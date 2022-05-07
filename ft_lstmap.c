/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:17:35 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 13:33:04 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list ’lst’ and applies the function ’f’ 
on the content of each node. Creates a new list resulting 
of the successive applications of the function ’f’.
The ’del’ function is used to delete the content of a node if needed. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		ptr = ft_lstnew(f(ptr->content));
		if (ptr == NULL)
			del(ptr);
		else
			ft_lstadd_back(&new_lst, ptr);
		lst = lst->next;
	}
	return (new_lst);
}

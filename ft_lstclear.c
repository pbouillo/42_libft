/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:20:59 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:55:38 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes and frees the given node and every
** successor of that node, using the function 'del'
** and free(3).
** Finally, the pointer to the list is set to NULL
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (lst == NULL || del == NULL)
		return ;
	head = *lst;
	while (head != NULL)
	{
		tmp = head->next;
		del(head->content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}

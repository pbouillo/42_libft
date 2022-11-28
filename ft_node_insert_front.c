/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_insert_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:32:29 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 11:34:04 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_insert_front(t_node **lst, int data)
{
	t_node	*node;
	
	node = ft_new_node(data);
	if (*lst != NULL && lst != NULL)
		node->next = *lst;
	*lst = node;
}

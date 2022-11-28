/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_insert_end.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:25:14 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:09:02 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_insert_end(t_node **lst, int data)
{
	t_node	*node;

	node = ft_new_node(data);
	if (*lst != NULL)
		ft_lstlast(*lst)->next = node;
	else
		*lst = node;
}
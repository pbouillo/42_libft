/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:42:54 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:54:56 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**
*/

t_node	*ft_lst_duplicate(t_node *lst)
{
	t_node	*dup;

	dup = NULL;
	while (lst)
	{
		ft_node_insert_end(&dup, lst->data);
		lst = lst->next;
	}
	return (dup);
}

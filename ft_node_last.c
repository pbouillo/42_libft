/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:13:08 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:14:47 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last 
** valid node on the list
*/

t_node	*ft_node_last(t_node *lst)
{
	if (lst != NULL)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

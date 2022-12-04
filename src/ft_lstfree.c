/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:42:19 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:43:29 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_node *lst)
{
	if (lst == NULL)
		return ;
	ft_lstfree(lst->next);
	ft_node_free(lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:38:39 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 11:42:22 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_delete(t_node **lst)
{
	if (*lst == NULL)
		return ;
	ft_lst_delete(&(*lst)->next);
	ft_node_delete(lst);
}

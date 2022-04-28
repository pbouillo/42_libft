/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:20:59 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/27 17:21:11 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every
successor of that node, using the function 'del'
and free(3).
Finally, the pointer to the list must be set to NULL */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));
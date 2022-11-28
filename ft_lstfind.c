/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:53:32 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:55:57 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** finds target in list
*/

t_list	*ft_lstfind(t_list *head, void *target)
{
	while (head)
	{
		if (head->content == target)
			return (head);
		head = head->next;
	}
	return (NULL);
}

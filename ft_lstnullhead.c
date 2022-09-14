/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnullhead.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:10:05 by pbouillo          #+#    #+#             */
/*   Updated: 2022/09/14 16:19:31 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstnullhead(t_list **lst)
{
	*lst = NULL;
}

void	null_caller(void)
{
	t_list	*head1;
	t_list	*head2;

	ft_lstnullhead(&head1);
	ft_lstnullhead(&head2);
}

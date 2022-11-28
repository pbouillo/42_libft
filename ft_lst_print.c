/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:44:54 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:55:10 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** prints all the data values in the list
** each one followed by a c value
*/

void	ft_lst_print(t_node *lst, int c)
{
	while (lst != NULL)
	{
		ft_putnbr(lst->data);
		lst = lst->next;
		if (lst != NULL)
			ft_putchar(c);
	}
	ft_putchar('\n');
}

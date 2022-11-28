/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:51:21 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:52:12 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** sets all bytes of s (any datatype) to 0. 
** If n is zero, ft_bzero does nothing 
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		((char *)s)[i] = '\0';
		i++;
	}
}

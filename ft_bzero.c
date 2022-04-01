/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:51:21 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/01 10:22:51 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function writes n zeroed bytes to the string s. 
If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	while (i < n)
	{	
		((char *)s)[i] = '\0';
		i++;
	}
}

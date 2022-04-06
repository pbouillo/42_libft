/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:24:55 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/06 17:44:27 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function contiguously allocates enough 
space for count objects that are size bytes of memory each
and returns a pointer to the allocated memory. 
The allocated memory is filled with bytes of value zero.
Returns a pointer to allocated memory.
- returns an allocated pointer of size count * len and 
sets mem to 0 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*data;

	data = malloc(count * size);
	if (data)
		ft_bzero(data, count * size);
	return (data);
}

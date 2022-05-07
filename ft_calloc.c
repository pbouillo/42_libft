/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:24:55 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 14:20:50 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function contiguously allocates enough 
space for 'count' objects that are 'size' bytes of memory each
and returns a pointer to the allocated memory. 
The allocated memory is filled with bytes of value zero.
Returns a pointer to the allocated memory. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*data;

	if (count == 0 || size == 0)
		return (malloc(0));
	if ((SIZE_MAX / size) < count && size > 0)
		return (NULL);
	data = malloc(count * size);
	if (data == NULL)
		return (NULL);
	ft_bzero(data, count * size);
	return (data);
}

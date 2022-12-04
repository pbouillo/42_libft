/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:24:55 by pbouillo          #+#    #+#             */
/*   Updated: 2022/12/04 16:14:27 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The calloc() function contiguously allocates enough
** space for 'count' objects that are 'size' bytes of memory each
** and returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
** Returns a pointer to the allocated memory.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem)
		return (0);
	ft_bzero(mem, size * count);
	return (mem);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:20:24 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/14 16:27:17 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies n bytes from memory area src to memory area dst
return the original value of dst */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		if (to == NULL && from == NULL)
			return (NULL);
		to[i] = from[i];
		i++;
	}
	return (to);
}

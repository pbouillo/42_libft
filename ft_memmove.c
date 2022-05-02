/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:22:46 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/26 16:15:27 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from src to dst.
- same as memcpy but handles overlaps by copying forward if dest < src 
and backwards otherwise */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (to > from)
	{
		while (len-- > 0)
			to[len] = from[len];
	}
	else
		ft_memcpy(to, from, len);
	return (to);
}

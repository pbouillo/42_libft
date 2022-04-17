/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:22:46 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/17 19:41:44 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive manner.
The memmove() function returns the original value of dst.
- same as memcpy but handles overlaps by copying forward if dest < src 
and backwards otherwise */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (to > from)
	{
		while (len-- > 0)
			to[len] = from[len];
	}
	else
	{	
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (to);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:13:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/19 13:24:23 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Concatenate strings. Note that room for the NUL 
should be included in dstsize.
strlcat() appends string src to the end of dst. 
It will then NUL-terminate, unless dstsize is 0 or 
the original dst string was longer than dstsize 
Returns initial length of dst plus the length of src.
- adds dstsize - strlen(dstsize) - 1 chars to dst from src */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	sz;
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	sz = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize < 1)
		return (srclen + dstsize);
	while (src[i] && sz < dstsize - 1)
	{
		dst[sz] = src[i];
		sz++;
		i++;
	}
	dst[sz] = '\0';
	if (dstsize < dstlen)
		return (srclen + dstsize);
	else
		return (dstlen + srclen);
}

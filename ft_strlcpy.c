/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:09:21 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/17 16:59:01 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copy strings. Take full size of the destination of the buffer 
and guarantee NUL-termination if there is room. 
Note that room for the NUL should be included in dstsize.
strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.
Returns length of src.
- copies dstsize minus 1 char from src to dst */

#include "libft.h"

/* size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dst[i] && src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:13:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/01 19:03:50 by pbouillo         ###   ########.fr       */
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
	char	*src_str;
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_str = (char *)src;
	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src_str);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	while (src_str[i] != '\0' && (dest_len + i) < (dstsize - 1))
	{
		dst[dest_len + i] = src_str[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

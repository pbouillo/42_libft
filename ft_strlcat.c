/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:13:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:00:25 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlcat() function appends the NUL-terminated string src 
** to the end of dst. It will append at most dstsize - strlen(dst) - 1 bytes, 
** NUL-terminating the result.
** Returns the initial length of dst plus the length of src.
*/

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

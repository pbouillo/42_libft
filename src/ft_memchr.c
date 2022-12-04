/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:42 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:57:13 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function locates the first occurrence of c 
** (converted to an unsigned char) in string s.
** The memchr() function returns a pointer to the byte located, 
** or NULL if no such byte exists within n bytes.
** - finds c in s (range of n)
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	unsigned int	i;
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *) s;
	chr = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (NULL);
}

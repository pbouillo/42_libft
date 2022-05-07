/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:24:03 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 14:22:01 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c 
(converted to an unsigned char) to the string b.
The memset() function returns its first argument. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*set;
	unsigned char	chr;

	i = 0;
	set = (unsigned char *) b;
	chr = (unsigned char) c;
	while (i < len)
	{
		set[i] = c;
		i++;
	}
	return (set);
}

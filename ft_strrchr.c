/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:28:01 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/12 18:00:42 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function is identical to strchr(),
except it locates the last occurrence of c.
Returns a pointer to the located character, or NULL
if the character does not appear in the string 
- finds c in s starting from the back
returns pointer to located character, 0 if not found */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

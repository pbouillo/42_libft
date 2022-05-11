/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:17:57 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 18:48:05 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Returns the trimmed string; NULL if allocation fails */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sz;
	char	*retstr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	sz = ft_strlen(s1);
	while (sz > 0 && ft_strchr(set, s1[sz]))
		sz--;
	retstr = ft_substr(s1, 0, sz + 1);
	return (retstr);
}

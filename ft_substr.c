/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:14:17 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/26 11:19:53 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’. Returns the substring, NULL if allocation failed
- creates a substring of s from start to (start + len) */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (sub == NULL || s == NULL)
		return (NULL);
	if (start < ft_strlen(s) && len > ft_strlen(s))
		len = ft_strlen(s);
	else if (ft_strlen(s) <= start)
		len = 0;
	while (i < len && start < ft_strlen(s))
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}

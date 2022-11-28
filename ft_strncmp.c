/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:06:35 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:01:10 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncmp() function lexicographically compare 
** the strings s1 and s2.
** The strncmp() function compares not more than n characters. 
** The comparison is done using unsigned characters.
** Returns the ASCII difference of the first unmatched char.
** 0 if no difference occured
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

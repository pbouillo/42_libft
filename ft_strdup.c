/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:11:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 14:50:07 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it. 
The pointer may subsequently be used as an argument to the function free(3).
- duplicates src (Check if NULL is returned) */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

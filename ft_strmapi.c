/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:12:06 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/19 16:34:48 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' to each character of 
the string 's', and passing its index as first 
argument to create a new string (with malloc(3))
resulting from successive applications of 'f'. 
- applies function f on every char of s */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

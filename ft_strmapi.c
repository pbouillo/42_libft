/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:12:06 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/07 15:01:44 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' to each character of 
the string 's', and passing its index as first 
argument to create a new string (with malloc(3))
resulting from successive applications of 'f'. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (s == NULL)
		return (NULL);
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

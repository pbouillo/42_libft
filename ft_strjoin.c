/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:19:29 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/06 17:41:45 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’. 
- creates a new string out of concatenation of s1 and s2 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(*new) * ((ft_strlen(s1) + 1) + (ft_strlen(s2) + 1)));
	while (s1[i] != '\0' && s2[i] != '\0')
		new[i++] = *s1++ + *s2++;
	if (new == NULL)
		return (NULL);
	return (new);
}

int	main(void)
{
	ft_strjoin("test", "string");
	return (0);
}

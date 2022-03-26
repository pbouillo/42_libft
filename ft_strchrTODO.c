/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrTODO.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:55:04 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/26 16:33:49 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c 
(converted to a char) in the string 
pointed to by s. The terminating null character 
is considered to be part of the string;
therefore if c is `\0', the functions locate
the terminating `\0'.*/

char	*ft_strchr(const char *s, int c)
{
	while ((*s != c) && (*s != '\0'))
	{	
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:00:19 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/29 09:10:58 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the 
null-terminated string needle in the string haystack,
where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, 
it should only be used when portability is not a concern.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:00:19 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 12:49:38 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the 
null-terminated string needle in the string haystack,
where not more than len characters are searched.
Characters that appear after a `\0' character are not searched. 
It should only be used when portability is not a concern.
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first
occurrence of needle is returned*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
}

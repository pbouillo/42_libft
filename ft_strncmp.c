/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:06:35 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 17:33:27 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strncmp() function lexicographically compare 
the null-terminated strings s1 and s2.
The strncmp() function compares not more than n characters.
Because strncmp() is designed for comparing strings
rather than binary data, characters that appear 
after a `\0' character are not compared.
Return an integer greater than, equal to,
or less than 0, according as the string s1 is greater than, 
equal to, or less than the string s2. 
The comparison is done using unsigned characters,
so that `\200' is greater than `\0'.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);
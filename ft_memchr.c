/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:42 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 17:32:36 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located, 
or NULL if no such byte exists within n bytes.
- finds c in s (range of n) */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);
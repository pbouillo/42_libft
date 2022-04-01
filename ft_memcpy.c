/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:20:24 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/01 13:12:53 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcpy() function copies n bytes 
from memory area src to memory area dst. 
If dst and src overlap, behavior is undefined. 
Applications in which dst and src might overlap 
should use memmove(3) instead. 
The memcpy() function returns the original value of dst. */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
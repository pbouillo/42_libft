/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:14:17 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/12 17:24:22 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’. Returns the substring, NULL if allocation failed
- creates a substring of s from start to (start + len) */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:17:57 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 17:33:37 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Returns the trimmed string; NULL if allocation fails 
- creates a trimmed substring of *s without chars in set */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set);

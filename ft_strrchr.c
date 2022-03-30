/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:28:01 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 10:27:47 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function is identical to strchr(),
except it locates the last occurrence of c.
Returns a pointer to the located character, or NULL
if the character does not appear in the string*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)

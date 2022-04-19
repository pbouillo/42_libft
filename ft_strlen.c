/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:40:03 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/19 16:20:39 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns the length of a string s (not counting '\0' ) */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

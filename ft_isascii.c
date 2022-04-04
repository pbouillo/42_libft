/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:03:03 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 10:45:05 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns wether an integer is an ascii-value or not */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}

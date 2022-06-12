/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:44:21 by pbouillo          #+#    #+#             */
/*   Updated: 2022/06/12 13:20:06 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* counts the number of digits of a number, 
based on its base (including minus sign if sign = 1) */

int	ft_digitcount(long nb, int base, int sign)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (sign == 1 && nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= base;
		i++;
	}
	return (i);
}

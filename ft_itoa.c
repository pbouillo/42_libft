/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:14:59 by pbouillo          #+#    #+#             */
/*   Updated: 2022/05/01 14:09:54 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled. */

#include "libft.h"

static int	neg_rev(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		++len;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;

	len = nbr_len(n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	if (n < 0)
		ret[0] = '-';
	else if (n == 0)
		ret[0] = '0';
	while (n != 0)
	{
		--len;
		ret[len] = neg_rev(n % 10) + '0';
		n /= 10;
	}
	return (ret);
}

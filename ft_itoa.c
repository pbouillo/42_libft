/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:14:59 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/21 17:05:56 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled. */

#include "libft.h"

int	count_digits(int num)
{
	int	count;

	count = 0;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*new;
	char	t;

	i = 0;
	new = (char *)malloc(sizeof(char) * count_digits(n));
	while (n > 0)
	{
		new[i] = (n % 10) + '0';
		n = n / 10;
	}
	new[i] = '\0';
	j = 0;
	while (j < i)
	{
		t = new[i];
		new[i] = new[j];
		new[j] = t;
		i--;
		j++;
	}
	return (new);
}

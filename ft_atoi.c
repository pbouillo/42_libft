/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:13:48 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:51:54 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** The atoi() function converts the initial portion of the string 
** pointed to by str to int representation.
** - returns a string as an integer 
** Handles white spaces, then sign, then the conversion 
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	long	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (res > 922337203685477580 && sign != -1)
			return (-1);
		if (res > 922337203685477580 && sign == -1)
			return (0);
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

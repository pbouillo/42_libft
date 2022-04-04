/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:47:51 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 10:46:59 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns wether an integer is a digit or not */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= 0 && a <= 9)
		return (a);
	else
		return (0);
}

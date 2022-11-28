/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:03:03 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:53:44 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns wether an integer is an ascii-value or not
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}

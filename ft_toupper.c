/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:24:13 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:02:23 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns a lowercase letter as an uppercase letter
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

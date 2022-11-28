/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:42:15 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:02:15 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns an uppercase letter as a lower case letter
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:14:25 by pbouillo          #+#    #+#             */
/*   Updated: 2022/09/14 13:16:55 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* frees a string with free(3) from its adress
set the pointer to NULL */

void	ft_strdel(char	**strptr)
{
	if (strptr)
	{
		if (*strptr != NULL)
		{
			free(*strptr);
			*strptr = NULL;
		}
	}
}

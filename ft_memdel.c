/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:10:35 by pbouillo          #+#    #+#             */
/*   Updated: 2022/09/14 13:12:27 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* takes the adress of a memory area that needs to be freed with free
then sets the pointer to NULL */

void	ft_memdel(void **memptr)
{
	if (memptr != NULL)
	{
		free(*memptr);
		*memptr = NULL;
	}
}

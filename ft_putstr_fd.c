/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:46:10 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 12:02:54 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file
descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	{
		write(fd, s, ft_strlen(s));
	}
}

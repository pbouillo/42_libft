/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:05:50 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 13:33:01 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string 's' to the given
file descriptor followed by a newline */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(1, '\n', 1);
}

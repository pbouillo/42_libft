/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:42:08 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/26 16:44:48 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the character ’c’ to the given file
descriptor.*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

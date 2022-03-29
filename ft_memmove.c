/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:22:46 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/29 09:19:11 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive manner.
The memmove() function returns the original value of dst.*/

void	*ft_memmove(void *dst, const void *src, size_t len)

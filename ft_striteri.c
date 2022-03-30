/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:08:27 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 13:10:48 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' on each character
of the string passed as argument, passing
its index as first argument. Each charachter is passed
by adress to 'f' to be modified if necessary */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

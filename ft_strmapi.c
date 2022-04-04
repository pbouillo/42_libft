/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:12:06 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 12:54:21 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function 'f' to each character of 
the string 's', and passing its index as first 
argument to create a new string (with malloc(3))
resulting from successive applications of 'f'. 
- applies function f on every char of s */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))

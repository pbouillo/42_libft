/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:16:29 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:59:22 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array
** of strings obtained by splitting ’s’ using the
** character ’c’ as a delimiter. The array must end
** with a NULL pointer.
*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

static int	word_len(const char *s, char c, int len)
{
	int	i;

	i = 0;
	while (s[len] && s[len] != c)
	{
		i++;
		len++;
	}
	return (i);
}

static char	**free_null_str(int str_count, char **arr)
{
	int	str_i;

	str_i = 0;
	while (str_i < str_count)
	{
		free(arr[str_i]);
		str_i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		str_i;
	int		str_count;
	char	**ret;

	i = 0;
	str_i = 0;
	if (s == NULL)
		return (NULL);
	str_count = count_words(s, c);
	ret = (char **)malloc((str_count + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (i < ft_strlen(s) && str_i < str_count)
	{
		while (s[i] == c)
			i++;
		ret[str_i] = ft_substr(s, i, word_len(s, c, i));
		if (ret[str_i] == NULL)
			return (free_null_str(str_count, ret));
		str_i++;
		i += word_len(s, c, i);
	}
	ret[str_i] = NULL;
	return (ret);
}

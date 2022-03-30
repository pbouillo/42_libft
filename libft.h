/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:01:58 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/30 16:34:30 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalnum(int c);
int	ft_isalpha(int a);
int	ft_isascii(int c);
int	ft_isdigit(int a);
int	ft_atoi(const char *str);
int	ft_strlen(char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strlen(char *str);
int	ft_isprint(int c);
int	ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcat(char *restrict dst,
		const char *restrict src, size_t dstsize);
size_t	ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize);

void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putnbr_fd(int n, int fd);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif

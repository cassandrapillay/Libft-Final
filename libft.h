/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:29:35 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/17 13:41:55 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmap(char const *s, char (*f)(char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_striter(char *s, void (*f)(char *));
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	*ft_memalloc(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
void	ft_putchar(unsigned char c);
int		my_whitespace(char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcpy(char *sd, const char *ss);
int		ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	ft_putendl(char const *s);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int c);
void	ft_putstr_fd(char const *c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str, const void *str2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_strclr(char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

#endif

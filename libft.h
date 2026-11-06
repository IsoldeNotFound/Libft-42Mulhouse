/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:45:00 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/06 01:37:05 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

int				ft_strlen(char *str);
size_t	        ft_strlcpy(char *dest, char *src, size_t size);
size_t      	ft_strlcat(char *dest, char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *src, const char *chr, size_t len);
char			*ft_strdup(char *src);
char	    *ft_strjoin(char *s1, char *s2);
char			*ft_substr(char *s, unsigned int start, size_t len);
int			    ft_tolower(int c);
int			    ft_toupper(int c);
char	    **ft_split(char *s, char c);
int				ft_atoi(char *str);
void			*ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int str);
int				ft_isalpha(int str);
int				ft_isascii(int str);
int				ft_isdigit(int str);
int				ft_isprint(int str);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char	    *ft_substr(char *s, unsigned int start, size_t len);
char	    *ft_itoa(int n);
char	    *ft_strtrim(char *s1, char *set);
char	    *ft_strmapi(char *s, char (*f)(unsigned int, char));
void	    ft_striteri(char *s, void (*f)(unsigned int, char *));
void	    ft_putchar_fd(char c, int fd);
void	    ft_putstr_fd(char *s, int fd);
void	    ft_putendl_fd(char *s, int fd);
void	    ft_putnbr_fd(int n, int fd);

#endif

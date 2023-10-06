/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:26:47 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 14:37:20 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

unsigned int		ft_strlcat(char *dst, const char *src, size_t size);
unsigned int		ft_strlcpy(char *dst, const char *src, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
char 				*ft_strchr(const char *s, int c);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char 				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_atoi(const char *str);
int					ft_isalnum(int n);
int					ft_isalpha(int n);
int					ft_isascii(int n);
int					ft_isdigit(int n);
int					ft_isprint(int n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *s1,const char *s2, size_t n);
int					ft_tolower(int ch);
int					ft_toupper(int ch);

#endif
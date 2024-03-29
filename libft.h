/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mryan <mryan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:30:21 by mryan             #+#    #+#             */
/*   Updated: 2020/11/13 13:44:15 by mryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *dest, int c, size_t n);

void				ft_bzero(void *dest, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *str);

size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);

int					ft_strncmp(const char *str1, const char *str2, size_t n);

int					ft_atoi(const char *str);

int					ft_isalpha(int a);

int					ft_isdigit(int a);

int					ft_isalnum(int a);

int					ft_isascii(int a);

int					ft_isprint(int a);

int					ft_toupper(int a);

int					ft_tolower(int a);

void				*ft_calloc(size_t count, size_t size);

char				*ft_strdup(char *str1);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strtrim(char const *s1, char const *set);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				**ft_split(char const *s, char c);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_itoa(int n);

char				**ft_split(char const *s, char c);

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif

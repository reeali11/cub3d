/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:10:22 by reeali            #+#    #+#             */
/*   Updated: 2024/08/13 13:31:07 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct t_list
{
	void			*content;
	struct t_list	*next;
}					t_list;
int					ft_isalpha(int c);
int					ft_isdigit(int d);
int					ft_isalnum(int n);
int					ft_isascii(int s);
int					ft_isprint(int p);
size_t				ft_strlen(const char *str);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				*ft_memset(void *str, int c, size_t n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *sd1, const void *ss2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t n);
char				*ft_strdup(char *src);
char				*ft_strnstr(const char *str1, const char *str2, size_t n);
void				*ft_calloc(size_t count, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				**ft_split(char const *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_printf(const char *string, ...);
void				ft_putchar(char c, int *len);
void				ft_putstr(char *s, int *len);
void				ft_putnbr(int nb, int *len);
void				ft_putunsnbr(unsigned int unnb, int *len);
void				ft_put_pointer(unsigned long pointer, int *len);
void				ft_put_hexa(unsigned int x, int *len, char c);

#endif
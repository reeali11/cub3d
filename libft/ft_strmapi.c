/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:15:24 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 16:53:48 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(char ch)
// {
// 	while (ch >= 97 && ch <= 122)
// 	{
// 		ch = ch - 32;
// 	}
// 	return (ch);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// char	f(char ch)
// {
// 	while (ch >= 97 && ch <= 122)
// 	{
// 		ch = ch - 32;
// 	}
// 	return (ch);
// }
// int main()
// {
//     char *str = "hello";
//     char *newstr;

//     newstr = ft_strmapi(str, *f);
//     printf("%s\n", newstr);

//     return (0);
// }

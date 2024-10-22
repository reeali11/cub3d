/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:16:52 by reeali            #+#    #+#             */
/*   Updated: 2023/08/07 19:00:14 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strnstr: Find the first substring in a length-limited string
// If str2 is an empty string, str1 is returned
#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len;
	char	c;
	size_t	i;

	len = ft_strlen(str2);
	if (len == 0)
		return ((char *)str1);
	if (n == 0 && *str2)
		return (NULL);
	c = *str2;
	while (*str1 != '\0' && len <= n)
	{
		if (*str1 == c)
		{
			i = 0;
			while (str1[i] == str2[i] && str1[i] && i < len && (i + 1) <= n)
				i++;
			if (i == len)
				return ((char *)str1);
		}
		str1++;
		n--;
	}
	return (NULL);
}
// int main()
// {
//     char s1[] = "hello, are you happy?";
//     char s2[] = " ";

//     printf("%s", ft_strnstr(s1, s2, 0));
// }
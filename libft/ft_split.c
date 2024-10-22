/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:40:24 by reeali            #+#    #+#             */
/*   Updated: 2023/11/20 15:30:22 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// iterates over the elements from the last element to the first element
#include "libft.h"

static void	ft_free(char *s, size_t i)
{
	while (i > 0)
	{
		free(&s[i - 1]);
		i--;
	}
	free(s);
}

static int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*lencpy(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * (sizeof(char)));
	if (!str)
		return (0);
	ft_memcpy(str, s, i);
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	split = (((char **)malloc(sizeof(char *) * (count + 1))));
	if (!split)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		split[i] = lencpy(s, c);
		if (!split[i])
			ft_free(*split, i);
		s += ft_strlen(split[i]);
		i++;
	}
	split[count] = NULL;
	return (split);
}

// int main()
// {
//  			char	*s = "hello@reem@and@doaa!";

// 			char	**result = ft_split(s, '@');
//         int i = 0;
//         while(result[i] )
//         {
//             printf("%s\n",result[i]);

//             i++;
//         }

// }
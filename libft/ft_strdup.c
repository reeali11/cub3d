/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:14:38 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 19:20:26 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// str to hold the duplicated string
// i as a loop counter
// size to store the length of the source string
char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		size;

	size = 0;
	while (src[size])
	{
		size++;
	}
	str = (char *)malloc(size + 1);
	if (str != NULL)
	{
		i = 0;
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

// int main()
// {
// 	char str[] = "reem";
// 	printf("%s", ft_strdup(str));
// }
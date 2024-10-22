/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:07:01 by reeali            #+#    #+#             */
/*   Updated: 2023/07/29 13:47:06 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	int		len;
	char	*strjoin;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	x = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (len + 1));
	if (!strjoin)
		return (NULL);
	while (s1[i] != '\0')
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		strjoin[i++] = s2[x++];
	}
	strjoin[i] = '\0';
	return (strjoin);
}
// int main()
// {
//     char s1[] = "reem";
//     char s2[] = "ali";

//     printf("%s", ft_strjoin(s1, s2));
// }
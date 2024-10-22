/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:18:12 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 23:22:20 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

// int main()
// {
//     printf("%d\n", ft_strncmp("reem", "reem", 4));
//     printf("%d\n", ft_strncmp("reem ali", "ree", 5));
//     printf("%d\n", ft_strncmp("reem", "reeuj", 4));
// }
// int main()
// {
// 	char s1[] = "reem";
// 	char s2[] = "ali";
// 	printf("%d", ft_strncmp(s1, s2, 2));
// }
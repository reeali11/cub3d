/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:58:09 by reeali            #+#    #+#             */
/*   Updated: 2023/08/07 17:12:35 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if Return value < 0 then it indicates str1 is less than str2.
// if Return value > 0 then it indicates str2 is less than str1.
// if Return value = 0 then it indicates str1 is equal to str2.
// size_t n: tne number of chr that will be comperde
// does not handel overlapping
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sd1;
	const unsigned char	*ss2;
	size_t				i;

	sd1 = s1;
	ss2 = s2;
	i = 0;
	while (i < n)
	{
		if (sd1[i] != ss2[i])
		{
			return (sd1[i] - ss2[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     printf("%d\n", ft_memcmp("reem", "reem", 4));
// }

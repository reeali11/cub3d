/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:06:14 by reeali            #+#    #+#             */
/*   Updated: 2023/07/29 09:40:41 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//searches for the first occurrence of the character c 
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
// int main()
// {
//   char s[] = "reem ali";
//   printf("%s", ft_memchr(s, 'm', 4));
// }
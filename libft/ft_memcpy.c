/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:09:34 by reeali            #+#    #+#             */
/*   Updated: 2023/08/08 12:26:20 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy block of memory
// while (n > i) to copy all string withot the null
// copies n characters from the object pointed to by s2 into
// the object pointed to by s1. It returns a pointer to the destination.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	dest1 = (char *)dest;
	src1 = (const char *)src;
	i = 0;
	if ((n == 0 || dest == src) && (dest == NULL || src == NULL))
		return (dest);
	while (n > i)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//     char sd1[] = "ali";
//     char ss2[] = "reem";
//     printf("%s", ft_memcpy(sd1, ss2, 4));
// }
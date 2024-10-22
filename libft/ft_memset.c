/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:52:02 by reeali            #+#    #+#             */
/*   Updated: 2023/11/04 16:39:22 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// [Fill block of memory]
//*str: it's the pointe of the memory locatin where the memory will be set
// int c: it's the value that is to be copied to the memory block
// size_t n: it's the number of bytes in the memory block which in set
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		s[i] = c;
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "hello reem";
// 	printf("before memset => %s", str);
// 	ft_memset(str,'o', 7);
// 	printf("\n aftre memset => %s\n", str);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:07:30 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 18:18:51 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calloc sets allocated memory to zero.
// count: the number of elements to be allocated.
// size: the size of elements.
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size != 0 && count > (UINT32_MAX / size))
		return (NULL);
	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
// int main()
// {
// 	int i;
// 	int n;
// 	int *s;

// 	n = 7;
// 	i = 0;
// 	s = calloc(n, sizeof(int));
// 	if (s)
// 	{
// 		while (i < n)
// 		{
// 			printf("s[%d] == %d\n", i, s[i]);
// 			i++;
// 		}
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:01:37 by reeali            #+#    #+#             */
/*   Updated: 2023/08/07 18:55:08 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n:number of bytes to set to zero
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main()
// {
//     char str[] = "reem";
//     printf("%d", (char *)ft_bzero(str, 3));
// }
// int main()
// {
//     char str[] = "reem";
//     ft_bzero(str, 3);
//     int i = 0;
//     while (i < 3)
//     {
//         printf("%d", str[i]);
//         i++;

//     }
//     return (0);
// }
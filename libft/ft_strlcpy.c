/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:27:27 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 16:59:57 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returnthe total length of the string they tried to create
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	srcsize;
	size_t	i;

	len = n - 1;
	i = 0;
	srcsize = ft_strlen(src);
	if (n != '\0')
	{
		while (src[i] != '\0' && i < len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
// int main()
// {
//     char dest[] = "reem";
//     char src[] = "ali";
//     printf("%zu", ft_strlcpy(dest, src, 4));
// } // “%zu” to print the variables of size_t length
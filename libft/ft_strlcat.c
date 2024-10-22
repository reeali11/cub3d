/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:36:57 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 16:56:53 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function appends the NUL-terminated string src to the end of dst.
// It will append at most size - strlen(dst) - 1 bytes,

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	i = 0;
	destlen = (ft_strlen(dst));
	srclen = (ft_strlen(src));
	if (destsize == 0)
		return (ft_strlen(src));
	if (destsize > destlen)
	{
		while (src[i] != '\0' && i < (destsize - destlen - 1))
		{
			dst[destlen + i] = src[i];
			i++;
		}
		dst[destlen + i] = '\0';
		return (srclen + destlen);
	}
	else
		return (srclen + destsize);
}
// int main()
// {
//     char dest[] = "reem";
//     char src[] = "ali";
//     printf("%zu", ft_strlcat(dest, src, 2));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:18:10 by reeali            #+#    #+#             */
/*   Updated: 2023/08/08 14:11:31 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// but for overlapping memory blocks, memmove is a safer approach than memcpy.
// The memmove function is used to copy n bytes of src to dest.
// It is marked as const because ft_memmove should not modify the source data.
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// int main()
// {
//     char src[] = "rgggeem";
//     char dest[] = "ali";
//     printf("%s", ft_memmove(dest, src, 4));
// }
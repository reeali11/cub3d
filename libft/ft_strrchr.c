/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:46:17 by reeali            #+#    #+#             */
/*   Updated: 2023/07/28 19:31:23 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = 0;
	while (s[len])
	{
		len++;
	}
	if (!s)
		return (NULL);
	i = len;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
//  int main()
//  {
//     char str[] = "hello there!";
//     printf("%s", ft_strrchr(str, 'l'));
//  }

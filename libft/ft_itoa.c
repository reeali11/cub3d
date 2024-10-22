/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:55:56 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 18:15:15 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n = -n;chang nb sign to + and count the - with nb
// while (n > 9)count nb
#include "libft.h"

int	countnb(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*part(char *s, long int nb)
{
	int	rs;

	rs = countnb(nb);
	if (nb < 0)
	{
		nb *= -1;
		s[0] = '-';
	}
	rs--;
	while (nb > 0)
	{
		s[rs] = (nb % 10) + '0';
		rs--;
		nb /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*s;

	i = countnb(n);
	nb = n;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	if (nb == 0)
		s[0] = '0';
	s = part(s, nb);
	s[i] = '\0';
	return (s);
}
// int	main(void)
// {
// 	printf("%s", ft_itoa(-123));
// }
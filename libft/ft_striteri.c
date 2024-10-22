/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:49:10 by reeali            #+#    #+#             */
/*   Updated: 2023/07/31 11:28:35 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include "stdio.h"

// void change(unsigned int i, char *s) {
//   if (i % 2) {
//     *s = *s - 32;
//   } else {
//     // *s = *s + 32;
//   }
// }

// int main() {
//   char str[5] = "Reem";

//   printf("Before : %s\n", str);
//   ft_striteri(str, &change);

//   printf("After: %s\n", str);
//   return (0);
// }
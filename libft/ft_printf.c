/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:49:01 by omali             #+#    #+#             */
/*   Updated: 2023/11/20 12:15:37 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printf_checker(char c, va_list *args, int *len, int *i)
{
	if (c == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_putunsnbr(va_arg(*args, unsigned int), len);
	else if (c == 'x' || c == 'X')
		ft_put_hexa(va_arg(*args, unsigned int), len, c);
	else if (c == 'p')
		ft_put_pointer(va_arg(*args, unsigned long), len);
	else if (c == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_checker(string[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putchar((char)string[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}

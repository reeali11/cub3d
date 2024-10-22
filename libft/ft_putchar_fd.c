/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:05:58 by reeali            #+#    #+#             */
/*   Updated: 2023/08/01 09:24:34 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "fcntl.h"
// #include <sys/fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//   int fd;

//   fd = open("./reem.txt", O_WRONLY | O_CREAT);
//   ft_putchar_fd('r', fd);
//   return (0);
// }
// int main(void)
// {
//   ft_putchar_fd('r', 1);
//   return (0);
// }

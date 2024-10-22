/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:32:29 by reeali            #+#    #+#             */
/*   Updated: 2023/07/28 18:07:21 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main(void) {
//   int fd;

//   fd = open("./reem.txt", O_WRONLY | O_CREAT);
//   char *s = "hello";
//   ft_putstr_fd(s, fd);
//   return (0);
// }
// int main()
// {
//   char s[] = "hello";
//   ft_putstr_fd(s, 1);
// }
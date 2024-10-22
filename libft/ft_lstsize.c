/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:56 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 23:23:44 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *node1 = ft_lstnew("hi");
//     t_list *node2 = ft_lstnew("reem");
//     t_list *node3 = ft_lstnew("!");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     int len = ft_lstsize(node1);
//     printf("%d", len);

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:42:15 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 23:23:37 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main()
// {
//     t_list *node1 = ft_lstnew("reem");
//     t_list *node2 = ft_lstnew("is");
//     t_list *node3 = ft_lstnew("here");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     t_list *lastnode = ft_lstlast(node1);

//     if (lastnode)
//     printf("%s", (char *)lastnode->content);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:23:12 by reeali            #+#    #+#             */
/*   Updated: 2023/08/02 10:15:29 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *node1 = ft_lstnew("reem");
//     t_list *node2 = ft_lstnew("ali");
//     t_list *node3 = ft_lstnew("om");

//     t_list *head = NULL;
//     ft_lstadd_front(&head, node3);
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     t_list *current = head;

//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return(0);
// }
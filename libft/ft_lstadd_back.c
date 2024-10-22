/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:49:49 by reeali            #+#    #+#             */
/*   Updated: 2023/08/07 19:02:58 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
// int main()
// {
//     t_list *node1 = ft_lstnew("reem");
//     t_list *node2 = ft_lstnew("ali");
//     t_list *node3 = ft_lstnew("om");

//     t_list *head = NULL;
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     t_list *current = head;

//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return(0);
// }
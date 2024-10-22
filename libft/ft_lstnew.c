/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:41:36 by reeali            #+#    #+#             */
/*   Updated: 2023/08/22 18:32:37 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int main()
// {
//     t_list *node1 = ft_lstnew("reem");
//     t_list *node2 = ft_lstnew("is");
//     t_list *node3 = ft_lstnew("here");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     t_list *head = node1;
//     while (head)
//     {
//         printf("%s\n", (char*)head->content);
//         head = head->next;
//     }
// }
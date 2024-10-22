/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:21:07 by reeali            #+#    #+#             */
/*   Updated: 2023/08/09 16:53:55 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	f(void *content)
// {
// 	char	*ch;

// 	ch = (char *)content;
// 	*ch = ft_tolower(*ch);
// }

// int main()
// {
//     t_list *node1 = ft_lstnew(strdup("R"));
//     t_list *node2 = ft_lstnew(strdup("W"));
//     t_list *node3 = ft_lstnew(strdup("I"));

//     t_list *head = NULL;
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     ft_lstiter(head, f);
//     t_list *current = head;

//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return(0);
// }
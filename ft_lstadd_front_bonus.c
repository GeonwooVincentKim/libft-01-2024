/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:28:49 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:16:06 by geonwkim         ###   ########.fr       */
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

// static void	print_list(t_list *list)
// {
// 	while (list != NULL)
// 	{
// 		printf("%s -> ", (char *)list->content);
// 		list = list->next;
// 	}
// 	printf("NULL\n");
// }

// int main()
// {
// 	t_list *list = NULL; // Start with an empty list

//     // Add elements to the front of the list
//     ft_lstadd_front(&list, ft_lstnew("three")); // List: 3
//     ft_lstadd_front(&list, ft_lstnew("two")); // List: 2 -> 3
//     ft_lstadd_front(&list, ft_lstnew("one")); // List: 1 -> 2 -> 3

//     printf("List after adding elements at the front: ");
// 	print_list(list);

// 	return (0);
// }

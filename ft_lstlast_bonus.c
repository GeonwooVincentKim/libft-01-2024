/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:12:30 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:49:10 by geonwkim         ###   ########.fr       */
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
// 	t_list *last;

//     // Add elements to the front of the list
//     ft_lstadd_front(&list, ft_lstnew("three")); // List: 3
//     ft_lstadd_front(&list, ft_lstnew("two")); // List: 2 -> 3
//     ft_lstadd_front(&list, ft_lstnew("one")); // List: 1 -> 2 -> 3

// 	printf("Last one");
// 	print_list(list);

//     // Using ft_lstlast to get the last element
//     last = ft_lstlast(list);
//     if (last != NULL)
//         printf("Last element: %s\n", (char *)last->content);
//     else
//         printf("The list is empty.\n");
// 	return (0);
// }

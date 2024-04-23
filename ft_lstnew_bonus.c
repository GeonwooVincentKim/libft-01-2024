/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:48:01 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 00:58:43 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// static void	print_list(t_list *list)
// {
// 	while (list != NULL)
// 	{
// 		printf("%d -> ", *(int *)list->content);
// 		list = list->next;
// 	}
// 	printf("NULL\n");
// }

// int main()
// {
// 	int a = 1, b = 2, c = 3; // Example data to store in the list nodes

// 	// Creating new nodes
// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);

// 	// Manually chaining nodes together
// 	node1->next = node2;
// 	node2->next = node3;

// 	// Printing the list
// 	print_list(node1);

// 	// Free the allocated memory (for simplicity, 
// 	// not freeing the int pointers a, b, c)
// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return (0);
// }

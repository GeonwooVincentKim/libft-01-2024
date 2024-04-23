/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:00:22 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:36:09 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	char *content = strdup("Dynamic string content");
//     if (!content) {
//         perror("Failed to allocate content");
//         exit(EXIT_FAILURE);
//     }

//     // Create a new list node
//     t_list *node = ft_lstnew(content);
//     if (!node)
// 	{
//         perror("Failed to create list node");
//         free(content); // Clean up content if list node creation fails
//         exit(EXIT_FAILURE);
//     }

//     // Delete the node
//     ft_lstdelone(node, del);

//     printf("Node and its content have been deleted\n");

// 	return (0);
// }

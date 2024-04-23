/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:23:43 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:43:20 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

// // Function to transform content
// static void	*uppercase(void *content)
// {
// 	int	i;

// 	i = 0;
// 	char *str = (char *)content;
// 	char *new_str = strdup(str); // Assuming strdup is available
// 	while (new_str && new_str[i])
// 	{
// 		new_str[i] = ft_toupper(new_str[i]);
// 		i++;
// 	}
// 	return (new_str);
// }

// static void	del(void *content)
// {
// 	free(content);
// }

// static void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int main()
// {
//     t_list *list = ft_lstnew(strdup("one"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("two")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("three")));

//     t_list *mapped_list = ft_lstmap(list, uppercase, del);

//     printf("Original list:\n");
//     ft_lstiter(list, print_content);
//     printf("Mapped list:\n");
//     ft_lstiter(mapped_list, print_content);

//     ft_lstclear(&list, del); // Clean up original list
//     ft_lstclear(&mapped_list, del); // Clean up mapped list
//     return 0;
// }

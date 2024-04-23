/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:23:11 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:40:56 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// static void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// static void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
//     t_list *list = ft_lstnew(strdup("One"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Two")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Three")));

//     ft_lstiter(list, print_content);

//     ft_lstclear(&list, del); // Clean up
//     return 0;
// }

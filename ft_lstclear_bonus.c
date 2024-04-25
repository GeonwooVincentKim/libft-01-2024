/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:22:20 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/25 19:07:50 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

static void	del(void *content)
{
	free(content);
}

int main()
{
    t_list *list = ft_lstnew(strdup("One"));
    ft_lstadd_back(&list, ft_lstnew(strdup("Two")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Three")));
    ft_lstclear(&list, del);
    ft_lstclear(&list, del);
	printf("%lu", (unsigned long)list);
    printf("List cleared.\n");
    return 0;
}

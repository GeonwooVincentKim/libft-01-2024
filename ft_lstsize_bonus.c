/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:14:32 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:34:13 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
		if (count < 0)
			return (-1);
	}
	return (count);
}

// int main()
// {
// 	int a = 1, b = 2, c = 3;
// 	int total;

// 	t_list *n1 = ft_lstnew(&a);
// 	t_list *n2 = ft_lstnew(&b);
// 	t_list *n3 = ft_lstnew(&c);

// 	n1->next = n2;
// 	n2->next = n3;

// 	total = ft_lstsize(n1);
// 	printf("%d\n", total);

// 	return (0);
// }

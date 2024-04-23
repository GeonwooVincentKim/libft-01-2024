/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:42:19 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 12:41:41 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalpha(int c)
{
	if ((c > 255 || c < 0))
		return (0);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main()
// {
// 	// int	test;
// 	int	i;

// 	i = ft_isalpha(97);
// 	// char a;
// 	// a = (char)i;

// 	printf("%d\n", i);
// 	// write(1, &a, 1);
// 	// write(1, "\n", 1);
// 	// is_alpha('Z');
// 	// write(1, "\n", 1);
// 	// is_alpha('a');
// 	// is_alpha('z');
// 	// is_alpha('@');
// 	// is_alpha('1');
// 	return (0);
// }

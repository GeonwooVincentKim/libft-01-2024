/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 01:14:44 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 01:18:40 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}

// int main()
// {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);
//     ft_bzero(str, sizeof(str));
//     printf("Cleared string: %s\n", str);
//     return 0;
// }

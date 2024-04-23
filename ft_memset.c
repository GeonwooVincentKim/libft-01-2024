/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:26:30 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 01:11:57 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// Casting void* -> char* (Line 22)
// void *ptr, int x, size_t n
// void *b, int c, size_t len
void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	size_t			len_size;

	p = (unsigned char *) ptr;
	len_size = 0;
	while (len_size < n)
		p[len_size++] = x;
	return (ptr);
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	printf("%s\n", str);
//     printf("Original string: %s\n", str);
// 	ft_memset(str + 7, '-', 5);
//     printf("Modified string: %s\n", str);
// 	return (0);
// }

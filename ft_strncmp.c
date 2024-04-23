/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:58:38 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:03:29 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	c1;
	unsigned char	c2;

	index = 0;
	while ((index < n) && (s1[index] || s2[index]))
	{
		c1 = (unsigned char)s1[index];
		c2 = (unsigned char)s2[index];
		if (c1 != c2)
			return (c1 - c2);
		index++;
	}
	return (0);
}

// int main()
// {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, World!";
//     const char *str3 = "Hello, world!"; // Note the lowercase 'w'
//     const char *str4 = "Hello";

//     // Comparing identical strings
//     if (ft_strncmp(str1, str2, 13) == 0)
//         printf("'%s' & '%s' same 13 characters\n", str1, str2);
//     // Comparing different strings (case sensitivity)
//     if (ft_strncmp(str1, str3, 13) != 0)
//         printf("'%s' & '%s' differ first 13 characters\n", str1, str3);
//     // Comparing strings with one being a prefix of the other
//     if (ft_strncmp(str1, str4, 5) == 0)
//         printf("'%s' & '%s' same 5 characters\n", str1, str3);
//     // Comparing strings up to a point before they differ
//     if (ft_strncmp(str1, str3, 7) == 0)
//         printf("'%s' & '%s' same 7 characters\n", str1, str3);
//     return (0);
// }

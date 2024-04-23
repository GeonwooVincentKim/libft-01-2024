/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 01:33:34 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:00:28 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return (NULL);
}

// int main()
// {
//     // Example usage
//     const char test_str[] = "Hello, World!";
//     char *ptr = ft_strchr(test_str, 'W');
//     if (ptr != NULL)
//         printf("Character found: %c\n", *ptr);
//     else
//         printf("Character not found.\n");
//     return 0;
// }

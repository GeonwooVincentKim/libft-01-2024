/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:55:47 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 18:06:33 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		index;
	char		*dest_byte;
	const char	*src_byte;

	if (!dest && !src)
		return (NULL);
	dest_byte = (char *)dest;
	src_byte = (const char *)src;
	index = 0;
	while (index < n)
	{
		dest_byte[index] = src_byte[index];
		index++;
	}
	return (dest);
}

// int main()
// {
//     // Copying a string
//     char src_string[] = "Hello, World!";
//     char dest_string[20];
//     ft_memcpy(dest_string, src_string, sizeof(src_string)); // null
//     printf("Copied String: %s\n", dest_string);

//     // Copying an array of integers
//     int src_array[] = {1, 2, 3, 4, 5};
//     int dest_array[5];
// 	unsigned long i = 0;

//     ft_memcpy(dest_array, src_array, sizeof(src_array));
//     printf("Copied Array: ");
// 	while (i < sizeof(dest_array) / sizeof(dest_array[0]))
// 	{
//         printf("%d ", dest_array[i]);
// 		i++;
// 	}
//     printf("\n");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:34:04 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 18:46:01 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_str;
	const char	*src_str;

	if (!dest && !src)
		return (NULL);
	dest_str = (char *)dest;
	src_str = (const char *)src;
	if (dest <= src)
	{
		while (n--)
			*dest_str++ = *src_str++;
	}
	else
	{
		dest_str += n;
		src_str += n;
		while (n--)
			*--dest_str = *--src_str;
	}
	return (dest);
}

// int main()
// {
//     // Simple non-overlapping copy
//     char src[] = "Hello, World!";
//     char dest[50];

//     ft_memmove(dest, src, sizeof(src));
//     printf("Non-overlapping copy: %s\n", dest);

//     // Overlapping copy, source starts before destination
//     char overlapExample1[] = "1234567890";
// 	// Move "12345" to start at index 2
//     ft_memmove(overlapExample1 + 2, overlapExample1, 5); 
//     printf("Overlap, src before dst: %s\n", overlapExample1);

//     // Resetting string for the next example
//     char overlapExample2[] = "1234567890";

//     // Overlapping copy - destination starts before source
// 	// Move "34567" to start at index 0
//     ft_memmove(overlapExample2, overlapExample2 + 2, 5);
//     printf("Overlap, dst before src: %s\n", overlapExample2);

//     return (0);
// }

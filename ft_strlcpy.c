/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:30:30 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 13:59:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size)
	{
		while (src[i] != '\0' && i < (dest_size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
// 	const char *sourceString = "Hello, World!";
// 	char destBuffer1[20];
// 	char destBuffer2[6];
// 	// large buffer
// 	size_t len1 = ft_strlcpy(destBuffer1, sourceString, sizeof(destBuffer1));
// 	printf("large buffer: %s (length of src: %zu)\n", destBuffer1, len1);
// 	// small buffer
// 	size_t len2 = ft_strlcpy(destBuffer2, sourceString, sizeof(destBuffer2));
// 	printf("buffer: %s (length of src: %zu)\n", destBuffer2, len2);
// 	return (0);
// }

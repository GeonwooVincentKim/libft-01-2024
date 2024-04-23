/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:59:33 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 22:04:42 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	n;

	if (!dest_size)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dest = ft_strlen((const char *)dest);
	if (dest_size <= len_dest)
		return (dest_size + len_src);
	n = len_dest;
	i = 0;
	while (src[i] && n + 1 < dest_size)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (len_dest + len_src);
}

// int main()
// {
// 	char dest[20] = "ABCDE";
// 	char dest1[20] = "ABCDE";
// 	char src[] = "1234";
// 	int x = 13;
// 	int y = 10;

// 	unsigned int result1 = ft_strlcat(dest, src, x);
// 	unsigned int result2 = strlcat(dest1, src, y);
// 	printf("%s: %u\n", dest, result1);
// 	printf("%s: %u\n", dest1, result2);
// 	return (0);
// }

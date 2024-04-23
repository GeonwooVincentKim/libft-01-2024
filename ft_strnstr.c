/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:09:31 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 00:10:29 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[n])
		{
			while (haystack[i + n] == needle[n] && (i + n) < len)
			{
				if (needle[n + 1] == '\0')
					return ((char *)(haystack + i));
				n++;
			}
			n = 0;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *haystack = "This is a simple example string.";
//     const char *needles[] = {"simple", "example", "notfound", ""};
//     char *result;
//     size_t len = 35; // Search limit

// 	unsigned long	i;

// 	i = 0;
// 	while (i < sizeof(needles) / sizeof(needles[0]))
// 	{
// 		result = ft_strnstr(haystack, needles[i], len);
//         if (result)
//             printf("Found '%s': %s\n", needles[i], result);
//         else
//             printf("'%s' NOT FOUND first %zu characters.\n", 
// needles[i], len);
// 		i++;
// 	}
// 	return (0);
// }

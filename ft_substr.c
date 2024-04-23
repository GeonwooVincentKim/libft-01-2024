/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:23:59 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:04:43 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*newarray;
	size_t	len_s;

	if (!str)
		return (NULL);
	len_s = ft_strlen(str);
	if (len_s < start || len == 0)
		return (newarray = ft_calloc(1, 1));
	else if (len_s - start < len)
		len = len_s - start;
	newarray = (char *)malloc((len + 1));
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, str + start, len + 1);
	return (newarray);
}

// int main()
// {
//     char const *sourceString = "Hello, World!";
//     // substring starting from index 0, length 5
//     char *substring1 = ft_substr(sourceString, 0, 5);
//     if (substring1)
// 	{
//         printf("Substring 1: %s\n", substring1);
//         free(substring1);
//     }
//     // substring starting from index 7, length 5
//     char *substring2 = ft_substr(sourceString, 7, 5);
//     if (substring2)
// 	{
//         printf("Substring 2: %s\n", substring2);
//         free(substring2);
//     }
//     // substring from beyond the end of the string
//     char *substring3 = ft_substr(sourceString, 50, 5);
//     if (substring3)
// 	{
//         printf("Substring 3: %s\n", substring3); // emptys
//         free(substring3);
//     }
//     return (0);
// }

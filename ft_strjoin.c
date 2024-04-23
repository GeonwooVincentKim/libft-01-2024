/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:50:42 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 22:58:06 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newarray;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	newarray = (char *)malloc(sizeof(char) * (len + 1));
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, s1, len + 1);
	ft_strlcat(newarray, s2, len + 1);
	return (newarray);
}

// int main()
// {
//     const char *str1 = "Hello, ";
//     const char *str2 = "World!";
//     char *result;

//     result = ft_strjoin(str1, str2);
//     if (result != NULL)
// 	{
//         printf("Joined string: %s\n", result);
//         free(result);
//     } 
// 	else
//         printf("Failed to join strings.\n");
//     return (0);
// }

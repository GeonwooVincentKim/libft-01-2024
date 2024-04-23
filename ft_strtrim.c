/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:11:12 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 00:55:44 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_check_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	char	*newarray;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(*s1, set) == 1)
			s1++;
		else
			break ;
	}
	len_s1 = ft_strlen(s1);
	while (len_s1 != 0)
	{
		if (ft_check_set(s1[len_s1 - 1], set) == 1)
			len_s1--;
		else
			break ;
	}
	newarray = (char *)malloc(len_s1 + 1);
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, (char *)s1, len_s1 + 1);
	return (newarray);
}

// int main()
// {
// 	const char *originalStr = "  \t\n Hello, World! \t\n  ";
//     const char *trimChars = " \n\t";
//     char *trimmedStr;

//     trimmedStr = ft_strtrim(originalStr, trimChars);
//     if (trimmedStr != NULL)
// 	{
//         printf("Original: '%s'\n", originalStr);
//         printf("Trimmed: '%s'\n", trimmedStr);
//         free(trimmedStr);
//     }
// 	else
//         printf("Failed to trim the string.\n");
// 	return (0);
// }

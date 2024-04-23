/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:11:23 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 20:35:20 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// char	*ft_strdup(const char *s)
// {
// 	char	*duplicate;
// 	size_t	i;

// 	duplicate = (char *)malloc(strlen(s) + 1);
// 	if (duplicate == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		duplicate[i] = s[i];
// 		i++;
// 	}
// 	duplicate[i] = '\0';

// 	return (duplicate);
// }
char	*ft_strdup(const char *s)
{
	return (ft_substr(s, 0, ft_strlen(s)));
}

// return (ft_substr(s, 0, ft_strlen(s)));
// char	*duplicate;

// duplicate = malloc(strlen(s) + 1);
// if (duplicate == NULL)
// 	return (NULL);
// ft_memcmp(duplicate, s);
// return (duplicate);

// int main()
// {
//     // Example usage
//     const char* original = "Hello, World!";
//     char* copy = ft_strdup(original);
//     if (copy != NULL)
// 	{
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", copy);
//         // Free the allocated memory for the duplicate string
//         free(copy);
//     }
// 	else
//         printf("Failed to duplicate string.\n");
//     return (0);
// }

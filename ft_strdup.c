/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:11:23 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/23 19:42:20 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	return (ft_substr(s, 0, ft_strlen(s)));
}

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

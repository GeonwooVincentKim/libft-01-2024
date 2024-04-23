/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:13:39 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:01:49 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i > 0)
	{
		if (str[i - 1] == (char)c)
			return ((char *)(str + i - 1));
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	const char *str = "Find the last occurrence of a character.";
//     char toFind[] = {'a', 'z', '\0'}; // Characters to search for

// 	int	i;

// 	i = 0;
// 	while (toFind[i] != '\0')
// 	{
// 		char *lastOccurrence = ft_strrchr(str, toFind[i]);
//         if (lastOccurrence)
//             printf("Last '%c': position %ld\n", toFind[i], 
// lastOccurrence - str);
//         else
//             printf("'%c' not found.\n", toFind[i]);
// 		i++;
// 	}
// 	return (0);
// }

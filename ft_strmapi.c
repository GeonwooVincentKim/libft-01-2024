/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:29:44 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:02:48 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len_str;
	char			*newarray;

	if (!str || !f)
		return (NULL);
	len_str = ft_strlen(str);
	newarray = (char *)malloc(len_str + 1);
	if (!newarray)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		newarray[i] = (*f)(i, str[i]);
		i++;
	}
	newarray[i] = '\0';
	return (newarray);
}

// static char	to_uppercase(unsigned int i, char c)
// {
// 	i = 0;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int main() {
// 	const char *str = "hello, world";
// 	char *modifiedStr;

// 	modifiedStr = ft_strmapi(str, to_uppercase);
// 	if (modifiedStr != NULL)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Modified: %s\n", modifiedStr);
// 		free(modifiedStr); // Remember to free the dynamically allocated string
// 	}
// 	else
// 		printf("Failed to modify the string.\n");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:33:53 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/23 19:44:23 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!str || !f)
		return ;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}

// // upper -> lower
// static void	example_function(unsigned int i, char *ch)
// {
// 	i = 0;
// 	if (*ch >= 'a' && *ch <= 'z')
// 		*ch = '*';
// }

// int main()
// {
//     char str[] = "example string";
//     ft_striteri(str, example_function);
//     printf("Modified string: %s\n", str); 
// // Output should show the string with all uppercase letters
//     return 0;
// }

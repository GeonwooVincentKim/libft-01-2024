/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:55:24 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:07:24 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	write(fd, "\n", 1);
}

// int main()
// {
//     char *message = "Hello, World!";
//     ft_putendl_fd(message, 1);
//     ft_putendl_fd("Goodbye, World!", 2);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:09:53 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:06:49 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

// 1 -> Print
// int main(void)
// {
// 	ft_putstr_fd("Hello World", 1);
// 	return (0);
// }

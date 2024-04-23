/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:29:25 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 14:58:56 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num_long;

	num_long = (long)n;
	if (num_long < 0)
	{
		ft_putchar_fd('-', fd);
		num_long *= -1;
	}
	if (num_long >= 10)
	{
		ft_putnbr_fd(num_long / 10, fd);
		ft_putchar_fd(num_long % 10 + '0', fd);
	}
	else
		ft_putchar_fd(num_long + '0', fd);
}

// int main()
// {
//     ft_putnbr_fd(12345, 1);
//     ft_putchar_fd('\n', 1);
//     ft_putnbr_fd(-6789, 2);
//     ft_putchar_fd('\n', 2);
//     return (0);
// }

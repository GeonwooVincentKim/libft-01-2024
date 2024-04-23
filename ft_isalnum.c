/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:55:15 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 15:02:43 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int c)
{
	if ((c > 255 || c < 0))
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	int	i;
// 	i = ft_isalnum(0);
// 	printf("%d\n", i);
// 	return (0);
// }

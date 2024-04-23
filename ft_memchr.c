/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:33:24 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 13:58:40 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_index;

	index = 0;
	s_index = (unsigned char *)str;
	while (index < n)
	{
		if (s_index[index] == (unsigned char)c)
			return ((void *)(s_index + index));
		index++;
	}
	return (NULL);
}

// int main()
// {
//    const char str[] = "intra.42.fr";
//    const char ch = '.';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }

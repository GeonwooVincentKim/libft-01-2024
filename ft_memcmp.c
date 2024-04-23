/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:45:35 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 18:01:07 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str1 == *str2) && n - 1 > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return ((int)(*str1 - *str2));
}

// int main ()
// {
//    char str1[15];
//    char str2[15];
//    int ret;
//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "ABCDEF", 6);
//    ret = ft_memcmp(str1, str2, 5);
//    if(ret > 0)
//       printf("str2 is less than str1");
//    else if(ret < 0)
//       printf("str1 is less than str2");
//    else
//       printf("str1 is equal to str2");
//    return (0);
// }

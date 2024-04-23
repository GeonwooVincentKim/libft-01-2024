/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:09:32 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 22:47:05 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_to_char(char *str, long number, int len)
{
	while (number > 0)
	{
		str[len] = 48 + (number % 10);
		number /= 10;
		len--;
	}
	return (str);
}

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	number;

	len = ft_numlen(n);
	str = (char *)malloc((len + 1));
	number = n;
	if (!(str))
		return (NULL);
	str[len] = '\0';
	len--;
	if (number == 0)
		str[0] = '0';
	else if (number < 0)
	{
		number *= -1;
		str[0] = '-';
	}
	str = ft_to_char(str, number, len);
	return (str);
}

// int main ()
// {
//     int numbers[] = {1234, -1234, 0, INT_MAX, INT_MIN};
//     unsigned long i;
//     char *str;

// 	i = 0;
// 	while (i < sizeof(numbers) / sizeof(numbers[0]))
// 	{
// 		str = ft_itoa(numbers[i]);
//         if (str != NULL)
// 		{
//             printf("string representation of %d is: %s\n", numbers[i], str);
//             free(str); // Free the dynamically allocated string
//         } 
// 		else
//             printf("Failed to convert %d to a string.\n", numbers[i]);
// 		i++;
// 	}
// 	return (0);
// }

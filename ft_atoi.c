/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 01:44:29 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/19 16:32:47 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char str_i, int sign, long ans)
{
	if (ans == LONG_MAX / 10 && sign == 1)
	{
		if ('8' <= str_i && str_i <= '9')
			return (1);
	}
	else if (ans > LONG_MAX / 10 && sign == 1)
		return (1);
	else if (ans == LONG_MAX / 10 && sign == -1 && (str_i == '9'))
		return (2);
	else if (ans > LONG_MAX / 10 && sign == -1)
		return (2);
	return (0);
}

long	ft_strtol(const char *str, int sign)
{
	long	ans;
	int		n;

	n = 0;
	ans = 0;
	while (ft_isdigit(str[n]))
	{
		if (ft_check(str[n], sign, ans) == 1)
			return (LONG_MAX);
		else if (ft_check(str[n], sign, ans) == 2)
			return (LONG_MIN);
		ans = (str[n] - 48) + (ans * 10);
		n++;
	}
	return (ans * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return ((int)ft_strtol(str, sign));
}

// int main()
// {
//     char *t_str[] = {
//         "1234",
//         "-123",
//         "   +42",
//         " ---+--+1234ab567",
//         "0",
//         "+-+-+-123",
//         "   -+2147483647",
//         " -2147483648"
//     };
//     int num_tests = sizeof(t_str) / sizeof(t_str[0]);
//     for (int i = 0; i < num_tests; i++) {
//         printf("ft_atoi(\"%s\") = %d\n", t_str[i], ft_atoi(t_str[i]));
//     }
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:07:12 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/20 01:45:27 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*p;
	size_t	size_bytes;

	if (n_items == 0 || size == 0)
	{
		n_items = 1;
		size = 1;
	}
	if (n_items > SIZE_MAX / size)
		return (NULL);
	size_bytes = n_items * size;
	p = malloc(size_bytes);
	if (p != NULL)
		ft_memset(p, 0, size_bytes);
	if (p == NULL)
		return (NULL);
	return (p);
}

// int main()
// {
//     // Check if memory allocation was successful
// 	int* array = (int*)ft_calloc(5, sizeof(int));
//     int	i;

// 	i = 0;
// 	if (array)
// 	{
// 		while (i < 5)
// 		{
// 			// This should print "0 0 0 0 0 "
// 			printf("%d ", array[i]);
// 			i++;
// 		}
// 		printf("\n");
//         free(array);
//     }
// 	else
//         printf("Memory allocation failed\n");
// 	return (0);
// }

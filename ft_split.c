/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:27:35 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/22 14:58:13 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static char	**free_array(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (0);
}

static size_t	ft_words_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_input_word(char *word, char const *s, size_t end_w, size_t len_w)
{
	size_t	j;

	j = 0;
	while (len_w > 0)
	{
		word[j] = s[end_w - len_w];
		j++;
		len_w--;
	}
	word[j] = '\0';
	return ;
}

static char	**ft_words_split(char const *s, char c,
	char **newarray, size_t num_words)
{
	size_t	i;
	size_t	word;
	size_t	len_word;

	i = 0;
	word = 0;
	len_word = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len_word++;
		}
		newarray[word] = (char *)malloc(sizeof(char) * (len_word + 1));
		if (!newarray)
			return (free_array(newarray, word));
		ft_input_word(newarray[word], s, i, len_word);
		len_word = 0;
		word++;
	}
	newarray[word] = 0;
	return (newarray);
}

char	**ft_split(char const *str, char c)
{
	char	**newarray;
	size_t	num_words;

	if (!str)
		return (0);
	num_words = ft_words_count(str, c);
	newarray = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!newarray)
		return (0);
	newarray = ft_words_split(str, c, newarray, num_words);
	return (newarray);
}

// int main()
// {
//     char const *str = "Hello, world! This is a test string.";
//     char delimiter = ' ';
//     char **splitStrings;

//     splitStrings = ft_split(str, delimiter);

//     if (splitStrings != NULL)
// 	{
//         size_t i = 0;
//         while (splitStrings[i] != NULL)
// 		{
//             printf("Split string [%zu]: %s\n", i, splitStrings[i]);
//             free(splitStrings[i]); // Free each string
//             i++;
//         }
//         free(splitStrings); // Free the array of strings
//     }
// 	else
//         printf("Failed to split string.\n");

//     return (0);
// }

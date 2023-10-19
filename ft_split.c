/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:43:41 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 18:15:13 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int	ft_size_word(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		i++;
		size++;
	}
	return (size);
}

static void	ft_free(char **str, int j)
{
	while (j-- > 0)
	{
		free(str[j]);
	}
	free(str);
}

//The split() function allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
//The array must be ended by a NULL pointer.
//Parameters:
//- s: The string to be split.
//- c: The delimiter character.
//Returns:
//The array of new strings resulting from the split.
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	int		size;
	char	**str;

	i = 0;
	j = 0;
	word = ft_wordcount(s, c);
	str = (char **)malloc((word + 1) * (sizeof(char *)));
	if (!str)
		return (NULL);
	while (j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!(str[j]))
			return (ft_free(str, j), NULL);
		i += size;
		j++;
	}
	str[j] = 0;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:45:35 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 18:27:43 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates sufficient memory for a copy of the string s1,
//does the copy, and returns a pointer to it.
//The pointer may subsequently be used as an argument to the function free(3).
//If insufficient memory is available,
//NULL is returned.
//Parameters:
//- s1: The string to be copied.
//Returns:
//A pointer to the copied string.
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

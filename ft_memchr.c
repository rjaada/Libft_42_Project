/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:12:33 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 17:35:15 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memchr() function locates the first occurrence of c (converted to an
// unsigned char) in string s.
// The memchr() function returns a pointer to the byte located, or NULL if no
// such byte exists within n bytes.
// Parameters:
// - s: The string to be searched.
// - c: The character to be located.
// - n: The number of bytes to be searched.
// Returns:
// A pointer to the byte located, or NULL if no such byte exists within n bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)(c))
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

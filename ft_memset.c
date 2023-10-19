/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:20:34 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 18:09:52 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memset() function writes len bytes of value c (converted to an unsigned
// char) to the string b.
// Parameters:
// - b: The string to be filled.
// - c: The character to fill the string with.
// - len: The number of bytes to be filled.
// Returns:
// A pointer to the filled string.
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

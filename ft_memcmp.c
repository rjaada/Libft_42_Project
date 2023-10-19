/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:16:26 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 17:40:21 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcmp() function compares byte string s1 against byte string s2.  Both
// strings are assumed to be n bytes long.
// The memcmp() function returns zero if the two strings are identical, other-
// wise returns the difference between the first two differing bytes (treated as
// unsigned char values, so that `\200' is greater than `\0',
//for example).  Zero-
// length strings are always identical.  This behavior is not required by C and
// portable code should only depend on the sign of the returned value.
// Parameters:
// - s1: The first string to be compared.
// - s2: The second string to be compared.
// - n: The maximum number of bytes to compare.
// Returns:
// Zero if the two strings are identical,
//otherwise returns the difference between
// the first two differing bytes.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	i = 0;
	x = (unsigned char *) s1;
	y = (unsigned char *) s2;
	while (i < n)
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
		i++;
	}
	return (0);
}

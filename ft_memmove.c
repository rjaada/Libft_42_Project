/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:34:22 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 17:56:27 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// the memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.
// Parameters:
// - dst: The pointer to the destination array
// where the content is to be copied.
// - src: The pointer to the source of data to be copied.
// - len: The number of bytes to be copied.
// Returns:
// A pointer to the destination, which is dst.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	size_t	cont;

	dst1 = (char *)dst;
	src1 = (char *)src;
	cont = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst1 > src1)
	{
		while (len-- > 0)
			dst1[len] = src1[len];
	}
	else
	{
		while (len > cont)
		{
			dst1[cont] = src1[cont];
			cont++;
		}
	}
	return (dst);
}

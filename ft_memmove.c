/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:34:22 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/16 11:47:16 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

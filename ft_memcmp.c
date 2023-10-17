/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:16:26 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/13 16:32:09 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

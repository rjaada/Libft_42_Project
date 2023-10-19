/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:03:29 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 16:45:09 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The calloc() function contiguously allocates enough space for count objects
//that are size bytes of memory
//each and returns a pointer to the allocated memory.
//The allocated memory is filled with bytes of value zero.
//Parameters:
//- count: The number of objects to allocate.
//- size: The size of the objects to allocate.
//Returns:
//A pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

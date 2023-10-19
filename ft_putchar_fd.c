/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:35:13 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 18:11:35 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the character ’c’ to the given file descriptor.
// Param. #1 The character to output.
// Param. #2 The file descriptor on which to write.
// Return value None.
// Libc functions write(2).
// Functions that are used None.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

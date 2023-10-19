/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:50:38 by rjaada            #+#    #+#             */
/*   Updated: 2023/10/19 18:53:45 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns the length of the string "str".
size_t	ft_strlen(const char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}

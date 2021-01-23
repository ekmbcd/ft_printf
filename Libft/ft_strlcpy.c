/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 07:44:29 by etaranti          #+#    #+#             */
/*   Updated: 2021/01/21 12:12:03 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (!dst && !src)
		return (0);
	while ((index + 1) < size && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	if (size != 0)
		dst[index] = 0;
	while (src[index])
		index++;
	return (index);
}

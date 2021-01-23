/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 07:39:37 by etaranti          #+#    #+#             */
/*   Updated: 2021/01/21 12:11:20 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				index;
	unsigned char		*ptr;

	index = 0;
	ptr = s;
	while (index < n)
		ptr[index++] = (unsigned char)c;
	return (s);
}

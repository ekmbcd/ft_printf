/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:08:53 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/21 12:08:56 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_case(const char **s)
{
	if (**s == 'x')
	{
		if (x_case(s) == -1)
			return (-1);
	}
	else if (**s == 'X')
	{
		if (ux_case(s) == -1)
			return (-1);
	}
	else if (**s == 'p')
	{
		if (p_case(s) == -1)
			return (-1);
	}
	return (0);
}

int	number_case(const char **s)
{
	if (**s == 'u')
	{
		if (u_case(s) == -1)
			return (-1);
	}
	else if (**s == 'd' || **s == 'i')
	{
		if (d_case(s) == -1)
			return (-1);
	}
	return (0);
}

int	base_case(const char **s)
{
	if (**s == 's')
	{
		if (s_case(s) == -1)
			return (-1);
	}
	else if (**s == 'c')
	{
		if (c_case(s) == -1)
			return (-1);
	}
	else if (**s == '%')
	{
		if (percent_case(s) == -1)
			return (-1);
	}
	else if (number_case(s) == -1 || hex_case(s) == -1)
		return (-1);
	if (g_var->save)
	{
		free(g_var->save);
		g_var->save = 0;
	}
	return (0);
}

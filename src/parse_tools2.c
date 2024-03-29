/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tools2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:30:38 by jaehchoi          #+#    #+#             */
/*   Updated: 2021/02/23 11:30:38 by jaehchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	check_double_position(char c)
{
	if (c == 'N' || c == 'S' || c == 'W' || c == 'E')
		g_camera_count += 1;
}

int		is_equal(char *a, char *b)
{
	while (*a == *b && *a)
	{
		++a;
		++b;
	}
	if (*a == '\0' && *b == '\0')
		return (TRUE);
	return (FALSE);
}

double	max(double a, double b)
{
	return ((a > b) ? a : b);
}

int		trimmed_size(char *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i])
	{
		if (is_space(a[i]))
			j--;
		++i;
		++j;
	}
	return (j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_long_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:05:20 by inowak--          #+#    #+#             */
/*   Updated: 2024/12/12 13:20:27 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	*sort_long_tab_extension(long *sorted_tab, int size)
{
	long	tmp;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (sorted_tab[i] > sorted_tab[j])
			{
				tmp = sorted_tab[i];
				sorted_tab[i] = sorted_tab[j];
				sorted_tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sorted_tab);
}

long	*sort_long_tab(long *tab, int size)
{
	long	*sorted_tab;
	int		i;

	sorted_tab = malloc(sizeof(long) * size);
	if (!sorted_tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		sorted_tab[i] = tab[i];
		i++;
	}
	sorted_tab = sort_long_tab_extension(sorted_tab, size);
	return (sorted_tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:58:50 by inowak--          #+#    #+#             */
/*   Updated: 2024/12/12 23:05:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_search_target(t_stacks *stacks, int index_b)
{
	int	i;
	int	min;
	int	max;

	min = ft_search_min_for_a(stacks);
	max = ft_search_max_for_a(stacks);
	i = 0;
	if (stacks->b[index_b] > stacks->a[max])
		return (max + 1);
	if (stacks->b[index_b] < stacks->a[min])
		return (min);
	else
	{
		while (i < stacks->size_a - 1)
		{
			if (stacks->b[index_b] > stacks->a[i]
				&& stacks->b[index_b] < stacks->a[i + 1])
				return (i + 1);
			i++;
		}
	}
	return (stacks->size_a);
}

void	ft_sort_b_to_a(t_stacks *stacks)
{
	int	target;
	int	index_b;

	target = 0;
	index_b = 0;
	while (stacks->size_b > 0)
	{
		target = ft_search_target(stacks, index_b);
		push_to_top_stack_a(stacks, target);
		pa(stacks);
	}
}

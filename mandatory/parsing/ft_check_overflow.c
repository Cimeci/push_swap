/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:12:10 by inowak--          #+#    #+#             */
/*   Updated: 2024/12/12 13:21:50 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_strlen_without_zero(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i + j])
		j++;
	return (j);
}

int	ft_check_overflow(char **argv)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (argv[j])
	{
		split = ft_split(argv[j], ' ');
		i = 0;
		while (split[i])
		{
			if (ft_strlen_without_zero(split[i]) > 11)
			{
				ft_free(split);
				return (0);
			}
			i++;
		}
		ft_free(split);
		j++;
	}
	return (1);
}

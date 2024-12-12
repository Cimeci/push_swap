/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:03:30 by inowak--          #+#    #+#             */
/*   Updated: 2024/12/12 13:19:55 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/////////////////////////////
//        ft_split.c       //
/////////////////////////////

size_t	ft_count_word(const char *s, char c);
char	**ft_split(char const *s, char c);

/////////////////////////////
//       ft_strcmp.c       //
/////////////////////////////

int		ft_strcmp(const char *s1, const char *s2);

/////////////////////////////
//    ft_sort_long_tab.c   //
/////////////////////////////

long	*sort_long_tab(long *tab, int size);

/////////////////////////////
//        ft_free.c        //
/////////////////////////////

void	ft_free(char **tab);

#endif
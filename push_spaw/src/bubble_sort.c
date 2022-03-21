/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:50:51 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_masint(int **mas_int, int len)
{
	int	i;
	int	cmen;
	int	j;

	j = 0;
	while (j++ < len)
	{
		i = 1;
		while (i < len)
		{
			if ((*mas_int)[i - 1] > (*mas_int)[i])
			{
				cmen = (*mas_int)[i - 1];
				(*mas_int)[i - 1] = (*mas_int)[i];
				(*mas_int)[i] = cmen;
			}
			i++;
		}
	}
}

void	bubble_sort(int *mas_int, int len)
{
	sort_masint(&mas_int, len);
}

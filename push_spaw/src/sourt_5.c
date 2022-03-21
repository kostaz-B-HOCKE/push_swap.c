/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sourt_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:12:39 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bonus_vis(t_list **st_a, t_list **st_b)
{
	t_list	*ll;
	int		number;
	int		i;
	int		j;

	i = 1;
	j = i;
	ll = *st_a;
	number = (*st_a)->index;
	while (ll)
	{
		if (ll->index < number)
		{
			j = i;
			number = ll->index;
		}
		ll = ll->next;
		i++;
	}
	return (j);
}

void	sort_5(t_list **st_a, t_list **st_b)
{
	int	number;

	number = bonus_vis(st_a, st_b);
	if (number == 3)
	{
		rra(st_a, 'a');
		rra(st_a, 'a');
	}
	else if (number == 2)
		rra(st_a, 'a');
	else if (number == 5)
		ra(st_a, 'a');
	else if (number == 4)
	{
		ra(st_a, 'a');
		ra(st_a, 'a');
	}
	pa(st_a, st_b);
	sort_4(st_a, st_b);
	pb(st_a, st_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:26:09 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_2b(t_list **st_a, t_list **st_b)
{
	t_list	*ll;

	ll = *st_b;
	if (ll->number < ll->next->number)
	{
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		rra(st_a, 'a');
	}
	else
	{
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
	}
}
//void	sort_3b(t_list **st_a, t_list **st_b)
//{
//	t_list	*ll;
//
//	ll = *st_b;
//	if (ll->index > ll->next->index && ll->index > ll->next->next->index)
//	{
//		rra(st_b, 'b');
//		pb(st_a, st_b);
//		sort_2b(st_a, st_b);
//		(*st_a)->flag = -1;
//		rra(st_a, 'a');
//	}
//	else if (ll->next->index > ll->index && ll->next->index >
//		ll->next->next->index)
//	{
//		ra(st_b, 'b');
//		pb(st_a, st_b);
//		sort_2b(st_a, st_b);
//		(*st_a)->flag = -1;
//		rra(st_a, 'a');
//	}
//	else if (ll->index < ll->next->next->index && ll->next->index <
//	        ll->next->next->index)
//	{
//		pb(st_a, st_b);
//		sort_2b(st_a, st_b);
//		(*st_a)->flag = -1;
//		rra(st_a, 'a');
//	}
//}

int	nuber_min_list(t_list **steck)
{
	int		n;
	int		i;
	int		j;
	t_list	*ll;

	i = 0;
	j = i;
	ll = *steck;
	n = ll->index;
	while (ll)
	{
		if (ll->index < n)
		{
			j = i;
			n = ll->index;
		}
		ll = ll->next;
		i++;
	}
	return (j + 1);
}

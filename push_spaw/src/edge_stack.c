/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:51:42 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	edge_upper_a(t_list **st_a)
{
	t_list	*ll;
	int		max;
	int		miin_index;

	max = final_index_stack(st_a);
	ll = *st_a;
	miin_index = ll->index;
	if (miin_index == max + 1)
	{
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	else if (ll->next->index == max + 1)
	{
		stack_sa(st_a, 'a');
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	return (2);
}

int	edge_upper_b(t_list **st_a, t_list **st_b, int final_index_a)
{
	t_list	*ll;

	if (!st_b)
		return (0);
	ll = *st_b;
	if (ll->index == final_index_a + 1 || ll->index == 0)
	{
		rra(st_b, 'b');
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	return (2);
}

int	edge_low_b_start(t_list **st_a, t_list **st_b, int final_index_a)
{
	t_list	*ll;

	if (!st_b)
		return (0);
	ll = *st_b;
	while (ll->next->next)
		ll = ll->next;
	if (ll->next->index == final_index_a + 1 || ll->next->index == 0)
	{
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	else if (ll->index == final_index_a + 1 || ll->index == 0)
	{
		sb(st_b);
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	return (2);
}

int	chek_edge_staks(t_list **st_a, t_list **st_b)
{
	int	final_index;
	int	flag;

	flag = chek_stack_final_flag(st_a);
	if (-1 == flag)
		if (5 == edge_upper_a(st_a))
			return (5);
	if (2 > ftcount_list(st_b))
		return (2);
	final_index = final_index_stack_bonus(st_a);
	if (5 == edge_low_b_start(st_a, st_b, final_index))
		return (5);
	if (5 == edge_upper_b(st_a, st_b, final_index))
		return (5);
	return (2);
}

void	chek_edge(t_list **st_a, t_list **st_b)
{
	int	i;

	i = 5;
	while (i == 5)
		i = chek_edge_staks(st_a, st_b);
}

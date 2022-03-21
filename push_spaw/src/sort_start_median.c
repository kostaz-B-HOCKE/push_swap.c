/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start_median.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:05:46 by                   #+#    #+#             */
/*   Updated: 2022/01/23 15:37:42 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//перекидывает 50% с большим флагом из А в стек В
//работает только для первого разделения -((((
void	items_stack_a(t_list **st_a, t_list **st_b, int flag)
{
	int	i;
	int	max;
	int	min;

	i = 0;
	min = min_index_astek(st_a, flag);
	max = max_index_astek(st_a, flag);
	while (i++ <= max + 1)
	{
		if ((*st_a)->index <= (max - min) / 2 && (*st_a)->flag == flag)
		{
			pa(st_a, st_b);
			chek_start_stack_b(st_a, st_b);
		}
		else if ((*st_a)->flag == flag)
			rra(st_a, 'a');
	}
	start_move_berr(st_a, st_b);
}

void	start_move_berr(t_list **st_a, t_list **st_b)
{
	t_list	*ll;
	int		n;
	int		i;

	ll = *st_b;
	n = 0;
	if (count_list_flag(st_b, -2) == 1)
		n++;
	else
	{
		while (ll && ll->flag == -2)
		{
			ll = ll->next;
			n++;
		}
	}
	i = n;
	while (n-- > 0)
	{
		rra(st_b, 'b');
		pb(st_a, st_b);
		(*st_a)->flag = -1;
	}
	while (i-- > 0)
		rra(st_a, 'a');
}

int	chek_start_stack_b2(t_list **st_a, t_list **st_b)
{
	t_list	*ll;
	int		step_index;

	ll = *st_b;
	while (ll->next)
		ll = ll->next;
	step_index = step_flag_stack_b(st_a, st_b);
	if (step_index + 1 == ll->index)
	{
		ra(st_b, 'b');
		(*st_b)->flag = -2;
		return (5);
	}
	return (2);
}

void	chek_start_stack_b(t_list **st_a, t_list **st_b)
{
	t_list	*ll;
	int		n;

	ll = *st_b;
	while (ll->next)
		ll = ll->next;
	if (ll->index == 0)
	{
		ra(st_b, 'b');
		(*st_b)->flag = -2;
	}
	n = 5;
	while (5 == n)
		n = chek_start_stack_b2(st_a, st_b);
}

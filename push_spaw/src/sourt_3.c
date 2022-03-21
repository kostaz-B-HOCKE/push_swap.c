/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sourt_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:10:59 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **stack)
{
	t_list	*ll;

	ll = *stack;
	if (ll->index > ll->next->index)
		stack_sa(stack, 'a');
}

void	sort_3(t_list **stack)
{
	int	number;

	number = bonus_vis(stack, NULL);
	if (number == 2)
	{
		if ((*stack)->index > (*stack)->next->next->index)
			rra(stack, 'a');
		else
			stack_sa(stack, 'a');
	}
	if (number == 3)
	{
		if ((*stack)->index > (*stack)->next->index)
			stack_sa(stack, 'a');
		ra(stack, 'a');
	}
	if (number == 1)
	{
		if ((*stack)->next->index > (*stack)->next->next->index)
		{
			ra(stack, 'a');
			stack_sa(stack, 'a');
		}
	}
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	number;

	number = bonus_vis(stack_a, stack_b);
	if (number == 3)
	{
		rra(stack_a, 'a');
		rra(stack_a, 'a');
	}
	if (number == 2)
		rra(stack_a, 'a');
	if (number == 4)
		ra(stack_a, 'a');
	pa(stack_a, stack_b);
	sort_3(stack_a);
	pb(stack_a, stack_b);
}

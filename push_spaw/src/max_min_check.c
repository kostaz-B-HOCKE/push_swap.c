/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:28:39 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index_astek(t_list **stack, int flag)
{
	t_list	*ll;
	int		max;

	ll = *stack;
	max = 0;
	while (ll)
	{
		if (ll->index > max && ll->flag == flag)
			max = ll->index;
		ll = ll->next;
	}
	return (max);
}

int	max_index_bstek(t_list **stack)
{
	t_list	*ll;
	int		max;

	ll = *stack;
	max = 0;
	while (ll)
	{
		if (ll->index > max)
			max = ll->index;
		ll = ll->next;
	}
	return (max);
}

int	min_index_astek(t_list **stack, int flag)
{
	t_list	*ll;
	int		min;

	ll = *stack;
	min = ll->index;
	while (ll)
	{
		if (ll->index < min && ll->flag == flag)
			min = ll->index;
		ll = ll->next;
	}
	return (min);
}

int	min_index_bstek(t_list **stack)
{
	t_list	*ll;
	int		min;

	ll = *stack;
	min = ll->index;
	while (ll)
	{
		if (ll->index < min)
			min = ll->index;
		ll = ll->next;
	}
	return (min);
}

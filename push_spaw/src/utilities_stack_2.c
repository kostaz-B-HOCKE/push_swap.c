/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_stack_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:26:41 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	final_index_stack(t_list **st_a)
{
	t_list	*ll;

	ll = *st_a;
	while (ll->next)
		ll = ll->next;
	return (ll->index);
}

int	final_index_stack_bonus(t_list **st_a)
{
	t_list	*ll;

	if (!*st_a)
		return (0);
	ll = *st_a;
	while (ll->next)
		ll = ll->next;
	return (ll->index);
}

int	chek_stack_final_flag(t_list **stack)
{
	t_list	*ll;

	ll = *stack;
	while (ll->next)
		ll = ll->next;
	return (ll->flag);
}

int	ftcount_list(t_list **stack)
{
	t_list	*ll;
	int		i;

	if (!*stack)
		return (0);
	ll = *stack;
	i = 0;
	while (ll)
	{
		ll = ll->next;
		i++;
	}
	return (i);
}

int	count_list_flag(t_list **st_a, int flag)
{
	t_list	*ll;
	int		i;

	i = 0;
	ll = *st_a;
	while (ll->next && ll->flag == flag)
	{
		i++;
		ll = ll->next;
	}
	return (i);
}

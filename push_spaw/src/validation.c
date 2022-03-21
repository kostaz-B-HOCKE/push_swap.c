/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:15:53 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	no_sort_cheack(t_list **st_a)
{
	t_list	*ll;

	ll = *st_a;
	while (ll->next)
	{
		if (ll->number > ll->next->number)
			return (2);
		ll = ll->next;
	}
	return (5);
}

int	cheak_duplicate_bonus(t_list **st_a)
{
	int		number;
	t_list	*ll;

	ll = (*st_a)->next;
	number = (*st_a)->number;
	while (ll)
	{
		if (number == ll->number)
			return (2);
		ll = ll->next;
	}
	return (5);
}

int	cheak_duplicate(t_list **st_a)
{
	t_list	*ll;
	int		i;

	i = ftcount_list(st_a);
	if (i <= 1)
		return (5);
	ll = *st_a;
	while (ll->next)
	{
		if (2 == cheak_duplicate_bonus(&ll))
			return (2);
		ll = ll->next;
	}
	return (5);
}

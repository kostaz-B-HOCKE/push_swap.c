/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:36:43 by                   #+#    #+#             */
/*   Updated: 2022/01/24 11:28:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//часть items_stack_b
int	mv_edge_final_a(t_list **st_a, t_list **st_b)
{
	int		final_index;
	t_list	*ll;

	final_index = final_index_stack_bonus(st_a);
	ll = *st_b;
	while (ll->next)
		ll = ll->next;
	if (ll->index == final_index + 1)
	{
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	return (2);
}

void	items_stack_b2(t_list **st_a, t_list **st_b, int flag, int len)
{
	t_list	*ll;
	int		cheak;

	ll = *st_b;
	if (ll->next)
	{
		while (ll->next)
			ll = ll->next;
		if (ll->index > len)
		{
			ll->flag = flag + 1;
			pb(st_a, st_b);
		}
		else
		{
			cheak = mv_edge_final_a(st_a, st_b);
			if (cheak != 5)
				ra(st_b, 'b');
		}
	}
}

int	items_stack_b(t_list **st_a, t_list **st_b, int flag)
{
	t_list	*ll;
	int		i;
	int		min;
	int		max;

	if (!st_b)
		return (0);
	i = 0;
	min = min_index_bstek(st_b);
	max = max_index_bstek(st_b);
	while (i++ <= (max - min))
		items_stack_b2(st_a, st_b, flag, min + (max - min) / 2);
	return (pcount_list(st_b));
}

//int	items_stack_b(t_list **st_a, t_list **st_b, int flag)
//{
//	t_list	*ll;
//	int		i;
//	int		min;
//	int		max;
//
//	if (!st_b)
//		return (0);
//	i = 0;
//	ll = *st_b;
//	min = min_index_bstek(st_b);
//	max = max_index_bstek(st_b);
//	while (i++ <= (max - min))
//		items_stack_b2(st_a, st_b, max, flag);
//	if (pcount_list(st_b) == 1)
//	{
//		pb(st_a, st_b);
//		ll->flag = flag + 2;
//	}
//	return (pcount_list(st_b));
//}
//перенос 50% стека А в стек Б
//пока в стеке а больше 6 элементов с высшим флагом // иначе сортировка по 5
//подсчет больших и меншего коэф
//осмотр краешков
// перенос 50% отст в стек а
//если элементов больше 3 - >=3 сортировка 3 и перенос в стека а

void	seve_all(t_list **st_a)
{
	t_list	*ll;

	ll = *st_a;
	if (ll->flag == 0 && ll->next->flag > 0)
		ll->flag = ll->next->flag;
}

void	sort_big(t_list **st_a, t_list **st_b, int n)
{
	int		flag_add;
	int		nm;
	int		nmm;

	nmm = 0;
	flag_add = 0;
	items_stack_a(st_a, st_b, max_flag_astek(st_a));
	while (nmm++ < 500)
	{
		nm = 0;
		while (nm++ < 500)
		{
			chek_edge(st_a, st_b);
			if (2 <= ftcount_list(st_b))
				items_stack_b(st_a, st_b, ++flag_add);
			else if (1 <= ftcount_list(st_b))
				stack_chek_sort(st_a, st_b);
			chek_edge(st_a, st_b);
		}
		items_stack_aaa(st_a, st_b, max_flag_astek(st_a));
		seve_all(st_a);
	}
}

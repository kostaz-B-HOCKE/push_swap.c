/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:23:40 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_list_flagged(t_list **stek, int flag)
{
	t_list	*ll;
	int		i;

	i = 0;
	ll = *stek;
	while (ll->next && ll->flag == flag)
	{
		ll = ll->next;
		i++;
	}
	return (i);
}

void	sort_2a(t_list **stack)
{
	t_list	*ll;

	ll = *stack;
	if (ll->number > ll->next->number)
		stack_sa(stack, 'a');
}

void	sort_height_stack(t_list **st_a, t_list **st_b)
{
	int	n;

	n = count_list_flagged(st_a, max_flag_astek(st_a));
	if (n == 2)
		sort_2(st_a);
	if (n == 3)
		sort_3(st_a);
	if (n == 4)
		sort_4(st_a, st_b);
	if (n == 5)
		sort_5(st_a, st_b);
	while (n-- > 0)
	{
		(*st_a)->flag = -1;
		rra(st_a, 'a');
	}
}

int	mv_edge_final_clon(t_list **st_a, t_list **st_b)
{
	int		final_index;
	t_list	*ll;

	final_index = final_index_stack_bonus(st_a);
	ll = *st_a;
	if (ll->index == final_index + 1)
	{
		(*st_a)->flag = -1;
		rra(st_a, 'a');
		return (5);
	}
	return (2);
}

// добавить если меньше 6 то оправить все элементы в стек Б
//void	items_stack_aaaa(t_list **st_a, t_list **st_b, int flag)
//{
//	int i;
//	int n;
//	int max;
//	int min;
//
//	chek_edge(st_a, st_b);
//	if (flag < 0)
//		return ;
//	n = 0;
//	i = 0;
//	min = min_index_astek(st_a, flag);
//	max = max_index_astek(st_a, flag);
//	if (3 > count_list_flagged(st_a, flag))// испраивть перенос с б не работате
//	{
//		sort_height_stack(st_a, st_b);
//	}
//	else
//	{
//		while (i++ < (max - min) + 1)
//		{
//			if (((*st_a)->index) < min + (max - min) / 2 + 1)
//				pa(st_a, st_b);
//			else if ((*st_a)->flag == flag)
//			{
//				rra(st_a, 'a');
//				n++;
//			}
//		}
//		while (n-- > 0)
//			ra(st_a, 'a');
//	}
//}

void	items_stack_aaa(t_list **st_a, t_list **st_b, int flag)
{
	int	i;
	int	max;
	int	min;

	i = 0;
	chek_edge(st_a, st_b);
	if (flag < 0)
		return ;
	min = min_index_astek(st_a, flag);
	max = max_index_astek(st_a, flag);
	if (3 > count_list_flagged(st_a, flag))
		sort_height_stack(st_a, st_b);
	else
	{
		while (i++ < (max - min) + 1)
		{
			if ((*st_a)->flag == flag)
				pa(st_a, st_b);
			chek_edge(st_a, st_b);
		}
	}
}
//void	items_stack_aaa(t_list **st_a, t_list **st_b, int flag)
//{
//	int i = 0;
//	int n;
//	int max;
//	int min;
//
//	if (flag < 0)
//		return ;
//	n = 0;
//	min = min_index_astek(st_a, flag);
//	max = max_index_astek(st_a, flag);
//	if (6 > count_list_flagged(st_a, flag))
//	{
//		stack_chek_sort(st_a, st_b);
//		final_move_a(st_a, st_b);
//	}
//	while (i++ < (max - min) + 1)
//	{
//		if (((*st_a)->index) < min + (max - min)/ 2 + 1)
//			pa(st_a, st_b);
//		else if ((*st_a)->flag == flag)
//		{
//			rra(st_a, 'a');
//			n++;
//		}
//	}
//	while (n-- > 0)
//		ra(st_a, 'a');
//}

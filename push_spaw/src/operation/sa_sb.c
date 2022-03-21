/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:37:55 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//смена двух элементов на вершине стека а
void	stack_sa(t_list **stack_a, char c)
{
	t_list	*new;

	new = *stack_a;
	*stack_a = (*stack_a)->next;
	new->next = (*stack_a)->next;
	(*stack_a)->next = new;
	if (c == 'a')
		ft_putstr("sa\n");
}

//void	sb(t_list **stack)
//{
//	t_list *new;
//	t_list *poi;
//	int num1;
//	int flag;
//	int index;
//
//	new = *stack;
//	while (new->next && new->next->next)
//		new = new->next;
//	poi = new->next;
//	if (!poi)
//		return ;
//	num1 = poi->number;
//	flag = poi->flag;
//	index = poi->index;
//	poi->index = new->index;
//	poi->flag = new->flag;
//	poi->number = new->number;
//	new->index = index;
//	new->number = num1;
//	new->flag = flag;
//	ft_putstr("sb\n");
//}

void	sb(t_list **stack)
{
	t_list	*new;
	t_list	*buf;

	new = *stack;
	if (!*stack && !new->next)
		return ;
	if (!new->next->next)
		ra(stack, 'b');
	else
	{
		while (new->next->next->next)
			new = new->next;
		buf = new ->next;
		new ->next = new->next->next;
		new ->next->next = buf;
		new ->next->next->next = NULL;
		ft_putstr("sb\n");
	}
}

void	ss(t_list **st_a, t_list **st_b)
{
	t_list	*new;
	t_list	*buf;

	new = *st_a;
	if (!st_a && !new->next)
		return ;
	if (!new->next->next)
		ra(st_a, 'b');
	else
	{
		while (new->next->next->next)
			new = new->next;
		buf = new ->next;
		new ->next = new->next->next;
		new ->next->next = buf;
		new ->next->next->next = NULL;
	}
	stack_sa(st_a, 's');
	ft_putstr("ss\n");
}

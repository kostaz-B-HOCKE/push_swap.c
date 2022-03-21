/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:18:11 by                   #+#    #+#             */
/*   Updated: 2022/01/24 16:51:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack_v2(char *super_str)
{
	if (chek_nubber(super_str) == 1)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	if (2 == int_edge_chek(ft_split(super_str, ' ')))
	{
		write(1, "Error\n", 6);
		return (2);
	}
	return (5);
}

char	*init_stack_v1(int argc, char **argv)
{
	char	*super_str;
	char	*str;
	int		i;

	i = 1;
	super_str = NULL;
	while (i < argc)
	{
		super_str = comb_str(super_str, argv[i]);
		i++;
	}
	return (super_str);
}

void	free_finish(t_list *stack_a, char *super_str)
{
	t_list	*ll;

	while (stack_a)
	{
		ll = stack_a;
		stack_a = stack_a->next;
		free(ll);
	}
	free(super_str);
}

int	init_stack(int argc, char **argv)
{
	char	*super_str;
	t_list	*stack_a;
	t_list	*stack_b;

	super_str = init_stack_v1(argc, argv);
	if (!(super_str))
	{
		write(1, "Error\n", 6);
		free(super_str);
		exit(1);
	}
	if (2 == init_stack_v2(super_str))
		exit(1);
	stack_a = fill_stack_a(ft_split(super_str, ' '));
	stack_b = NULL;
	if (2 == cheak_duplicate(&stack_a))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (2 == no_sort_cheack(&stack_a))
		sort_start_list(&stack_a, &stack_b, fcount_list(stack_a));
	free_finish(stack_a, super_str);
	return (0);
}
//	if (5 == no_sort_cheack(&stack_a))
//		printf("Final OK\n");
//	else
//		printf("KO\n");
//	poi = stack_a;        // смотрит стеки а и б если нет б то только а
//	while (poi)		      // смотрит стеки а и б если нет б то только а
//	{
//		printf("index %d  A %d flag %d\n", poi->index, poi->number,  poi->flag);
//		poi = poi->next;
//	}
//	if (stack_b != NULL)
//		printf("-------------\n");
//	if (stack_b != NULL)
//	poi = stack_b;
//	int count;
//	int ii;
//	int nbb;
//	count = ftcount_list(&stack_b);
//	nbb = count;
//	while (nbb-- > 0)
//	{
//		ii = 0;
//		poi = stack_b;
//		while (ii++ < count - 1)
//			poi = poi->next;
//		printf("index %d  B %d  flag %d\n", poi->index, poi->number, poi->flag);
//		count--;
//	}

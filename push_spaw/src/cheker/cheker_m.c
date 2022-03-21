/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 01:04:19 by                   #+#    #+#             */
/*   Updated: 2022/01/24 16:50:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	super_str = init_stack_v1(argc, argv);
	if (!(super_str))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (2 == init_stack_v2(super_str))
		return (1);
	stack_a = fill_stack_a(ft_split(super_str, ' '));
	stack_b = NULL;
	i = fcount_list(stack_a);
	if (2 == cheak_duplicate(&stack_a))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	cheker_start(&stack_a, &stack_b);
	free_finish(stack_a, super_str);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		if (init_stack(argc, argv) == 1)
			return (1);
}

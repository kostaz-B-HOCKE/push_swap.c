/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_stack_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:55:14 by                   #+#    #+#             */
/*   Updated: 2022/01/24 16:25:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_chek_sort(t_list **st_a, t_list **st_b)
{
	int	n;

	n = pcount_list_noflag(st_b);
	if (n == 1)
	{
		pb(st_a, st_b);
		(*st_a)->flag = -1;
		rra(st_a, 'a');
	}
	else if (n == 2)
		sort_2b(st_a, st_b);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_stack(char *str)
{
	int		i;
	char	**line_split;

	i = 0;
	line_split = ft_split(str, ' ');
	while (line_split[i])
		i++;
	return (i);
}

void	sort_start_list(t_list **stack_a, t_list **stack_b, int i)
{
	if (i == 2)
		sort_2b(stack_a, stack_b);
	else if (i == 3)
		sort_3(stack_a);
	else if (i == 4)
		sort_4(stack_a, stack_b);
	else if (i == 5)
		sort_5(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b, i);
}

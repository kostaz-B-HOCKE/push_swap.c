/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:58:47 by                   #+#    #+#             */
/*   Updated: 2022/01/24 11:33:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*start_list(int i)
{
	t_list	*ll;

	ll = malloc(sizeof (t_list));
	if (!ll)
		return (NULL);
	ll->next = 0;
	ll->index = 0;
	ll->flag = 0;
	ll->number = i;
	return (ll);
}

int	*intt_min(char **do_str)
{
	int	*int_mas;
	int	i;
	int	j;

	j = -1;
	i = len_dostr(do_str);
	int_mas = mamory_int_list(i);
	while (do_str[++j])
		int_mas[j] = ft_atoi(do_str[j]);
	bubble_sort(int_mas, len_dostr(do_str));
	return (int_mas);
}

void	fill_index(t_list **stack, int *mas_int)
{
	t_list	*ll;
	int		i;

	i = 0;
	ll = *stack;
	while (ll)
	{
		if (ll->number == mas_int[i])
		{
			ll->index = i;
			ll->flag = 0;
			ll = ll->next;
			i = -1;
		}
		i++;
	}
}

t_list	*fill_stack_a(char **do_str)
{
	int		i;
	int		*int_mas;
	t_list	*start;
	t_list	*new;

	i = 1;
	int_mas = intt_min(do_str);
	start = start_list(ft_atoi(do_str[0]));
	new = start;
	while (do_str[i])
	{
		new->next = start_list(ft_atoi(do_str[i++]));
		new = new->next;
	}
	fill_index(&start, int_mas);
	free(int_mas);
	i = 0;
	while (do_str[i])
		free(do_str[i++]);
	free(do_str);
	return (start);
}

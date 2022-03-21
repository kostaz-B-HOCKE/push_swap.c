/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_rra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:37:51 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*last_l(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_b(t_list **lst, t_list *new)
{
	t_list	*ll;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			ll = last_l(*lst);
			ll->next = new;
		}
	}
}

void	rra(t_list **stack, char c)
{
	t_list	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		exit(0);
	*stack = tmp->next;
	tmp->next = NULL;
	ft_lstadd_b(stack, tmp);
	if (c == 'a')
		ft_putstr("ra\n");
	if (c == 'b')
		ft_putstr("rrb\n");
}

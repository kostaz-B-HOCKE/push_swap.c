/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rarbrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:37:46 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ra(t_list **stack, char c)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stack;
	if (tmp1 == NULL)
		exit(0);
	if (ftcount_list(stack) == 1)
		return ;
	tmp2 = ft_lstlast(tmp1);
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = NULL;
	ft_lstadd_front(stack, tmp2);
	if (c == 'a')
		ft_putstr("rra\n");
	if (c == 'b')
		ft_putstr("rb\n");
}

void	rr(t_list **st_a, t_list **st_b)
{
	rra(st_a, 'r');
	ra(st_b, 'r');
	ft_putstr("rr\n");
}

void	rrr(t_list **st_a, t_list **st_b)
{
	ra(st_a, 'r');
	rra(st_b, 'r');
	ft_putstr("rrr\n");
}

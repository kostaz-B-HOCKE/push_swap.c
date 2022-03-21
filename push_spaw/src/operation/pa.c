/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:39:34 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*flast_l(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

void	fft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ll;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			ll = flast_l(*lst);
			ll->next = new;
		}
	}
}

void	pa(t_list **st_a, t_list **st_b)
{
	t_list	*ll;

	if (*st_a)
	{
		ll = *st_a;
		*st_a = (*st_a)->next;
		ll->next = NULL;
		if ((*st_b) == NULL)
			*st_b = ll;
		else
			fft_lstadd_back(st_b, ll);
		ft_putstr("pb\n");
	}
}

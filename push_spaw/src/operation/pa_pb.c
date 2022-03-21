/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:37:42 by                   #+#    #+#             */
/*   Updated: 2022/01/24 16:41:52 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew_int(int content, int i, int f)
{
	t_list	*ll;

	ll = (t_list *)malloc(sizeof(*ll));
	if (!ll)
		return (NULL);
	ll ->number = content;
	ll ->next = NULL;
	ll ->index = i;
	ll ->flag = f;
	return (ll);
}

void	ft_lstadd_front_one(t_list **lst, t_list *new)
{
	if (*lst && new)
	{
		new->next = NULL;
		new->next = *lst;
		*lst = new;
	}
}

void	pb(t_list **st_a, t_list **st_b)
{
	t_list	*ll;
	t_list	*newst_a;

	if (*st_b)
	{
		ll = *st_b;
		if (ll->next == NULL)
		{
			ft_lstadd_front_one(st_a, ll);
			*st_b = NULL;
		}
		else
		{
			while (ll->next->next)
				ll = ll->next;
			ft_lstadd_front_one(st_a, ll->next);
			ll->next = NULL;
		}
		ft_putstr("pa\n");
	}
}

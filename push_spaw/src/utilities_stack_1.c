/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_stack_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:25:13 by                   #+#    #+#             */
/*   Updated: 2022/01/24 11:37:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	pcount_list(t_list **stack)
{
	int		i;
	t_list	*ll;

	if (!stack)
		return (0);
	ll = *stack;
	i = 0;
	while (ll)
	{
		if (ll->flag == 0)
			i++;
		ll = ll->next;
	}
	return (i);
}

int	pcount_list_noflag(t_list **stack)
{
	int		i;
	t_list	*ll;

	if (!stack)
		return (0);
	ll = *stack;
	i = 0;
	while (ll)
	{
		ll = ll->next;
		i++;
	}
	return (i);
}

int	*mamory_int_list(int len)
{
	int	*int_mas;

	int_mas = (int *)malloc(sizeof(int ) * (len));
	if (!(int_mas))
		return (0);
	return (int_mas);
}

int	max_flag_astek(t_list **stack)
{
	t_list	*ll;
	int		flag;

	ll = *stack;
	flag = ll->flag;
	while (ll)
	{
		if (ll->flag > flag)
			flag = ll->flag;
		ll = ll->next;
	}
	return (flag);
}

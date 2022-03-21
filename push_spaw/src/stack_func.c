/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:57:30 by                   #+#    #+#             */
/*   Updated: 2022/01/23 15:09:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fcount_list(t_list *ll)
{
	int	i;

	i = 0;
	while (ll)
	{
		ll = ll->next;
		i++;
	}
	return (i);
}

long	ft_atoilo(char *s)
{
	long	r;
	long	sig;

	sig = 1;
	r = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s && (*s == '-' || *s == '+'))
	{
		if (*s == '-')
			sig = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (r * sig);
}

int	int_edge_chek(char **do_str)
{
	long	number;
	int		i;
	int		j;

	j = 0;
	i = len_dostr(do_str);
	while (i > j)
	{
		number = ft_atoilo(do_str[j++]);
		if (number > 2147483647)
			return (2);
		if (number < -2147483648)
			return (2);
	}
	i = 0;
	while (do_str[i])
		free(do_str[i++]);
	free(do_str);
	return (5);
}

int	len_dostr(char **do_str)
{
	int	i;

	i = 0;
	while (do_str[i])
		i++;
	return (i);
}

int	step_flag_stack_b(t_list **st_a, t_list **st_b)
{
	t_list	*ll;

	ll = *st_b;
	if (ll->flag == -2 || ll->index == 0)
		return (ll->index);
	else
		return (2147483);
}

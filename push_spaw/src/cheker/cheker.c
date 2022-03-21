/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 01:04:43 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	eeeee(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	mimicrid(t_list **st_a, t_list **st_b, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		stack_sa(st_a, 'a');
	else if (!ft_strncmp(str, "sb\n", 3))
		sb(st_b);
	else if (!ft_strncmp(str, "ra\n", 4))
		rra(st_a, 'a');
	else if (!ft_strncmp(str, "rra\n", 4))
		ra(st_a, 'a');
	else if (!ft_strncmp(str, "rb\n", 4))
		ra(st_a, 'b');
	else if (!ft_strncmp(str, "rrb\n", 4))
		rra(st_a, 'b');
	else if (!ft_strncmp(str, "pb\n", 3))
		pb(st_a, st_b);
	else if (!ft_strncmp(str, "pa\n", 3))
		pa(st_a, st_b);
	else if (!ft_strncmp(str, "ss\n", 3))
		ss(st_a, st_b);
	else if (!ft_strncmp(str, "rr\n", 3))
		rr(st_a, st_b);
	else if (!ft_strncmp(str, "rrr\n", 3))
		rrr(st_a, st_b);
	else
		eeeee();
}

void	cheker_start(t_list **st_a, t_list **st_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		mimicrid(st_a, st_b, line);
	}
	free(line);
	if (5 == no_sort_cheack(st_a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

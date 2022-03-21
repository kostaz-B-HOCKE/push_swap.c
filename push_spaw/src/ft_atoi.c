/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:25:27 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *s)
{
	int	r;
	int	sig;

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
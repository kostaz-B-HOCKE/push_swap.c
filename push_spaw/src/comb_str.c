/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:30:20 by                   #+#    #+#             */
/*   Updated: 2022/01/24 15:59:57 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chek_nubber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '+')
				|| (str[i] == '-') || (str[i] == ' ')))
			return (1);
		i++;
	}
	return (0);
}

char	*comb_str(char *str, char *s_new)
{
	char	*s;
	int		len;

	len = ft_strlen(s_new);
	if (len == 0)
		return (NULL);
	if (str == NULL)
		s = substr_spece(s_new, 0, len);
	else
		s = strjoin_spece(str, s_new);
	return (s);
}

char	*memory_str(char *s1, char *s2)
{
	int		len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * len + 2);
	if (!str)
		return (NULL);
	return (str);
}

char	*strjoin_spece(char *s1, char *s2)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (NULL);
	str = memory_str(s1, s2);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		str[i + n] = s2[n];
		n++;
	}
	str[i + n] = ' ';
	str[i + n + 1] = '\0';
	free(s1);
	return (str);
}

char	*substr_spece(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	n;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_strlen(&s[i]);
	if (n < len)
		len = n;
	if (start > n)
		len = 0;
	str = malloc(sizeof(char ) * (len + 2));
	if (!str)
		return (NULL);
	n = 0;
	while (s[start] && n < len)
		str[n++] = s[start++];
	str[n] = ' ';
	str[n + 1] = '\0';
	return (str);
}

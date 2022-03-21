/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:59:46 by                   #+#    #+#             */
/*   Updated: 2022/01/23 13:39:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				number;
	int				index;
	int				flag;
	struct s_list	*next;
}	t_list;

// считывание argv
char	*space_str(char *str);
char	*comb_str(char *str, char *s_new);
char	*strjoin_spece(char *s1, char *s2);
char	*substr_spece(char *s, unsigned int start, size_t len);
int		init_stack(int argc, char **argv);
int		fcount_list(t_list *ll);
int		*mamory_int_list(int len);
int		len_dostr(char **do_str);

//LIBFT
char	**ft_split(char *s, char c);
int		ft_atoi(const char *s);
int		ft_strlen(const char *str);
void	ft_putstr(char *str);
long	ft_atoilo(char *s);

int		ft_atoi_check(char *str, int *a, int j);
int		chek_nubber(char *str);
int		put_in_stack(int *a, int *b, char **argv, int argv_counter);

//wark stack
t_list	*fill_stack_a(char **do_str);
t_list	*fill_stack_b(char **do_str);
void	stack_sa(t_list **stack_a, char c);

//операции со стеками
void	stack_sa(t_list **stack_a, char c);
void	rra(t_list **stack, char c);
void	ra(t_list **stack, char c);
void	pa(t_list **st_a, t_list **st_b);
void	pb(t_list **st_a, t_list **st_b);
void	sb(t_list **stack_a);
void	ss(t_list **st_a, t_list **st_b);
void	rr(t_list **st_a, t_list **st_b);
void	rrr(t_list **st_a, t_list **st_b);
int		int_edge_chek(char **do_str);

//сортирока
void	sort_start_list(t_list **stack_a, t_list **stack_b, int i);
void	sort_2(t_list **stack);
void	sort_3(t_list **stack);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_big(t_list **st_a, t_list **st_b, int n);
void	sort_4b(t_list **st_a, t_list **st_b);
void	sort_5b(t_list **st_a, t_list **st_b);

//void	sort_3b(t_list **stack);
//void	sort_2b(t_list **stack);
void	sort_2b(t_list **st_a, t_list **st_b);
void	sort_3b(t_list **st_a, t_list **st_b);
//big sort
void	chek_start_stack_b(t_list **st_a, t_list **st_b);
void	items_stack_a(t_list **st_a, t_list **st_b, int flag);
void	bubble_sort(int *int_mas, int len);
void	sort_int(t_list **stack_a, int len);
int		chek_edge_staks(t_list **st_a, t_list **st_b);
void	chek_edge(t_list **st_a, t_list **st_b);
int		edge_upper_a(t_list **st_a);
void	items_stack_aaa(t_list **st_a, t_list **st_b, int flag);
void	sort_height_stack(t_list **st_a, t_list **st_b);
void	stack_chek_sort(t_list **st_a, t_list **st_b);
int		stack_start(char *super_str);

//utilites_stack
int		chek_stack_final_flag(t_list **stack);
int		max_index_astek(t_list **stack, int flag);
int		min_index_astek(t_list **stack, int flag);
int		max_index_bstek(t_list **stack);
int		min_index_bstek(t_list **stack);

int		ftcount_list(t_list **stack);
int		count_list_flagged(t_list **stek, int flag);
int		max_flag_astek(t_list **stack);
void	stack_chek_sort(t_list **st_a, t_list **st_b);
int		nuber_min_list(t_list **steck); //смотрит номер большего листа
int		pcount_list(t_list **stack);
int		bonus_vis(t_list **st_a, t_list **st_b);
int		step_flag_stack_b(t_list **st_a, t_list **st_b);
int		pcount_list_noflag(t_list **stack);
int		final_index_stack(t_list **st_a);

//utilites_stack
int		final_index_stack_bonus(t_list **st_a);
int		count_list_flag(t_list **st_a, int flag);
void	start_move_berr(t_list **st_a, t_list **st_b);
int		cheak_duplicate(t_list **st_a);
int		no_sort_cheack(t_list **st_a);

//gnl
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen1(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);

//cheker
void	cheker_start(t_list **st_a, t_list **st_b);
#endif

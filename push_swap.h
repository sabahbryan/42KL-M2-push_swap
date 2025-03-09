/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:32 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/09 21:23:59 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

//STACK STRUCT
typedef struct s_stack
{
    int             value;
    struct s_stack  *next;
} t_stack;

//MAIN (radix_sort.c)
int		get_max_bits(t_stack *stack);
void	radix_sort(t_stack **a, t_stack **b);
void	push_swap(t_stack **a, t_stack **b);

//SMALL NUMBER SORT (mini_sort.c)
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);

//UTILS (sort_utils.c)
t_stack	*create_node(int value);
void	free_stack(t_stack *stack);
int		stack_size(t_stack *stack);

//***OPERATIONS***

//PUSH (ops_push.c)
void	push(t_stack **dst, t_stack **src);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
//SWAP (ops_swap.c)
void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
//ROTATE (ops_rotate.c)
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
//REVERSE ROTATE (ops_reverse.c)
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif

/*
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	t_stack_node;
}

//Handle errors

//Stack initiation

//Nodes initiation

//Stack utils

//Commands

//Algorithm

*/
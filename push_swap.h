/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:32 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/14 17:50:12 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>

//STACK NODE STRUCT
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

//STACK STRUCT
typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;
// *top: Pointer to the top of the stack
// size: Number of elements in the stack

//PUSH (ops_push.c)
void	push(t_stack *from, t_stack *to);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

//SWAP (ops_swap.c)
void	swap(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

//ROTATE (ops_rotate.c)
void	rotate(t_stack *stack);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

//REVERSE ROTATE (ops_reverse.c)
void	reverse_rotate(t_stack *stack);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

//MOVE COST CALCULATION

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:17 by bryaloo           #+#    #+#             */
/*   Updated: 2024/10/14 23:04:46 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//SWAP OPERATIONS

/**
 * @brief	?
 * @param	*stack	?
 * @return	?
 */
void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->top = second;
}
// No need to swap if the stack has less than two elements
// function description

/**
 * @brief	Swaps the first 2 elements in 'a'
 * @param	*a	?
 * @return	None. Only modify structures of the stack
 */
void	sa(t_stack *a)
{
	swap(a);
	ft_printf("sa\n");
}
// Prints "sa" in the terminal

/**
 * @brief	Swaps the first 2 elements in 'b'
 * @param	*b	?
 * @return	None. Only modify structures of the stack
 */
void	sb(t_stack *b)
{
	swap(b);
	ft_printf("sb\n");
}
// Prints "sb" in the terminal

/**
 * @brief	Performs "sa" and "sb" at the same time
 * @param	*a	?
 * @param	*b	?
 * @return	None. Only modify structures of the stack
 */
void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
// Prints "ss" in the terminal
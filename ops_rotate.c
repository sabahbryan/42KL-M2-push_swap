/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:11 by bryaloo           #+#    #+#             */
/*   Updated: 2024/10/14 23:10:36 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ROTATE OPERATIONS

/**
 * @brief	?
 * @param	*stack	?
 * @return	?
 */
void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*current;

	if (stack->size < 2)
		return ;
	first = stack->top;
	stack->top = first->next;
	current = stack->top;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
}
// No need to rotate if the stack has less than two elements
// Move the top to the second node
// Traverse to the last node
// Link last node to the old top
// Old top is now the last node

/**
 * @brief	Shifts all elements up by 1 in 'a' and make the first element last
 * @param	*a	?
 * @return	None. Only modify structures of the stack
 */
void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}
// Prints "ra" in the terminal

/**
 * @brief	Shifts all elements up by 1 in 'b' and make the first element last
 * @param	*a	?
 * @return	None. Only modify structures of the stack
 */
void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}
// Prints "rb" in the terminal

/**
 * @brief	Performs "ra" and "rb" at the same time
 * @param	*a	?
 * @param	*b	?
 * @return	None. Only modify structures of the stack
 */
void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
// Prints "rr" in the terminal

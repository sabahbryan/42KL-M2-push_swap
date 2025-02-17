/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:11 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/17 20:32:27 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ROTATE OPERATIONS

/**
 * @brief	Shifts first node to the bottom of stack
 * @param	*stack	 pointer to a stack data structure
 * @var		first	pointer to highest node in the stack
 * @var		current	pointer to find the last node
 * @return	if there is less than 2 elements in stack
 * @note	1) edge case: if less than 2 elements, return
 * @note	2) store top node in first, set top to next (second) node
 * @note	3) initialise current as top node
 * @note	4) while traversing: current becomes next (last) node
 * @note	5) after traversing, current is last, first is top
 * @note	6) link last node to first, break link to next node
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
 * @param	*a	Pointer to stack 'a'
 * @note	Prints "ra" in the terminal.
 */
void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

/**
 * @brief	Shifts all elements up by 1 in 'b' and make the first element last
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "rb" in the terminal.
 */
void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

/**
 * @brief	Performs "ra" and "rb" at the same time
 * @param	*a	Pointer to stack 'a'
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "rr" in the terminal.
 */
void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

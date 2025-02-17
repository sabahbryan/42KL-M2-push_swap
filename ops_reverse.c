/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:02 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/17 18:33:13 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//REVERSE ROTATE OPERATIONS

/**
 * @brief	Shifts last node to the top of stack
 * @param	*stack	 pointer to a stack data structure
 * @var		prev	pointer to track the second-last node
 * @var		current	pointer to find the last node
 * @return	if there is less than 2 elements in stack
 * @note	1) edge case: if less than 2 elements, return
 * @note	2) initialise prev to NULL, current as top node
 * @note	3) while traversing: prev becomes current, current becomes next
 * @note	4) after traversing, current is last, prev becomes second-last
 * @note	5) if prev exists, break link to last node, set to NULL
 * @note	6) move last node (current) to the top, link the old stack order
 * @note	7) update top node of stack to current (last)
 */
void	reverse_rotate(t_stack *stack)
{
	t_node	*prev;
	t_node	*current;

	if (stack->size < 2)
		return ;
	prev = NULL;
	current = stack->top;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	if (prev)
		prev->next = NULL;
	current->next = stack->top;
	stack->top = current;
}
// No need to reverse rotate if less than two elements
// Traverse to the last node
// Break the link to the last node
// Move the last node to the top
// Update the top

/**
 * @brief	Shifts all elements down by 1 in 'a' and make the last element first
 * @param	*a	Pointer to stack 'a'
 * @note	Prints "rra" in the terminal.
 */
void	rra(t_stack *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

/**
 * @brief	Shifts all elements down by 1 in 'b' and make the last element first
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "rrb" in the terminal.
 */
void	rrb(t_stack *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

/**
 * @brief	Performs "rra" and "rrb" at the same time
 * @param	*a	Pointer to stack 'a'
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "rrr" in the terminal.
 */
void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}

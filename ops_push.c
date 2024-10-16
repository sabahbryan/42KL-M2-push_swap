/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:40 by bryaloo           #+#    #+#             */
/*   Updated: 2024/10/14 23:15:02 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//PUSH OPERATIONS

/**
 * @brief	?
 * @param	*a	?
 * @param	*b	?
 * @return	?
 */
void	push(t_stack *from, t_stack *to)
{
	t_node	*temp;

	if (from->size == 0)
		return ;
	temp = from->top;
	from->top = from->top->next;
	temp->next = to->top;
	to->top = temp;
	from->size--;
	to->size++;
}
// If no elements to push, returns ?
// Remove top element from 'from' stack
// Insert it on top of 'to' stack
// Update sizes

/**
 * @brief	Pushes the first element on top of 'b' onto 'a'
 * @param	*a	?
 * @param	*b	?
 * @return	None. Only modify structures of the stack
 */
void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_printf("pa\n");
}
// Prints "pa" in the terminal

/**
 * @brief	Pushes the first element on top of 'a' onto 'b'
 * @param	*a	?
 * @param	*b	?
 * @return	None. Only modify structures of the stack
 */
void	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	ft_printf("pb\n");
}
// Prints "pb" in the terminal
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:40 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/17 18:19:24 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//PUSH OPERATIONS

/**
 * @brief	Pushes the top node from source stack to destination stack
 * @param	*src	 source stack to push node from
 * @param	*dest	 destination stack to push node to
 * @var		temp	pointer to temporarily store node to be pushed
 * @return	if nothing to push, prevents SEGFAULT
 * @note	1) edge case: if source stack is empty, return
 * @note	2) assign top node of source stack to temp
 * @note	3) move top node of source stack to next node
 * @note	4) assign top node of destination stack to next node of temp
 * @note	5) assign temp to top node of destination stack
 * @note	6) decrement source stack size, increment destination stack size
 */
void	push(t_stack *src, t_stack *dest)
{
	t_node	*temp;

	if (src->size == 0)
		return ;
	temp = src->top;
	src->top = src->top->next;
	temp->next = dest->top;
	dest->top = temp;
	src->size--;
	dest->size++;
}
// If no elements to push, returns ?
// Remove top element from 'from' stack
// Insert it on top of 'to' stack
// Update sizes

/**
 * @brief	Pushes the first element on top of 'b' onto 'a'
 * @param	*a	Pointer to stack 'a'
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "pa" in the terminal.
 */
void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_printf("pa\n");
}

/**
 * @brief	Pushes the first element on top of 'a' onto 'b'
 * @param	*a	Pointer to stack 'a'
 * @param	*b	Pointer to stack 'b'
 * @note	Prints "pb" in the terminal.
 */
void	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	ft_printf("pb\n");
}

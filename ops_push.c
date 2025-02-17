/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:40 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 22:50:27 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//PUSH OPERATIONS

/**
 * @brief	Pushes the top node from source to destination
 * @param	*from	 source stack to push node from
 * @param	*to		 destination stack to push node to
 * @var		temp	pointer to temporarily store node to be pushed
 * @return	 returns if nothing to push, prevents SEGFAULT
 * @note	1) edge case: if source stack is empty, return
 * @note	2) assign top node of source stack to temp
 * @note	3) move top node of source stack to next node
 * 
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

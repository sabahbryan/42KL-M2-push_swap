/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:17 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 17:13:17 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//SWAP OPERATIONS

/**
 * @brief	Swaps the top 2 nodes in the stack
 * @param	stack	pointer to a stack data structure
 * @var		first	highest node in the stack
 * @var		second	second-highest node in the stack
 * @return	void.
 * @note	notes here.
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
// No need to swap if the stack has less than two elements, returns void
// Assigns *first to point to the first element of the stack
// Assigns *second to point to the second element of the stack
//		"first->next" is a pointer to the next node in the stack
// Reassigns first *next to after second node
// Reassigns second *next to the first node
// Updates top pointer to second node

/**
 * @brief	swaps the first 2 elements in 'a'
 * @param	*a	pointer to stack 'a'
 * @note	prints "sa" in the terminal.
 */
void	sa(t_stack *a)
{
	swap(a);
	ft_printf("sa\n");
}

/**
 * @brief	swaps the first 2 elements in 'b'
 * @param	*b pointer to stack 'b'
 * @note	prints "sb" in the terminal.
 */
void	sb(t_stack *b)
{
	swap(b);
	ft_printf("sb\n");
}

/**
 * @brief	performs "sa" and "sb" at the same time
 * @param	*a	pointer to stack 'a'
 * @param	*b	pointer to stack 'b'
 * @note	prints "ss" in the terminal.
 */
void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

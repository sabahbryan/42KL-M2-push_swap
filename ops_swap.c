/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:39:45 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/10 19:42:21 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swaps the top two elements of stack
 * @param stack pointer to stack
 * @var tmp pointer to store node
 * @return if stack is empty or has only one node, return immediately
 * @note	1) stores second node in tmp
 * @note	2) updates first node to point to third node
 * @note	3) updates tmp (second node) to point to first node
 * @note	4) updates stack to point to tmp as the new top
 */
void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

// Swaps the top two elements of stack a
void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

// Swaps the top two elements of stack b
void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

// Swaps the top two elements of stack a and stack b
void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

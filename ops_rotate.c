/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:29 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/10 19:52:12 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Moves top element to the bottom of stack, shifts the rest up by 1
 * @param stack pointer to stack
 * @var tmp pointer to store node
 * @var last pointer to store last node
 * @return if stack is empty or has only one node, return immediately
 * @note	1) stores top node in tmp
 * @note	2) updates stack to point to second node
 * @note	3) updates last to point to last node by traversing stack
 * @note	4) updates last to point to tmp (original top to bottom)
 * @note	5) updates tmp to point to NULL
 */
void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

// Shifts up all elements of stack a by 1
void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

// Shifts up all elements of stack b by 1
void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

// Shifts up all elements of stack a and stack b by 1
void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

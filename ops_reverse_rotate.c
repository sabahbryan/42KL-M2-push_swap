/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:23 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/10 19:59:03 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Moves bottom element to the top of stack, shifts the rest down by 1
 * @param stack pointer to stack
 * @var tmp pointer to store last node
 * @var last pointer to store second-last node
 * @return if stack is empty or has only one node, return immediately
 * @note	1) interates and finds second-last node
 * @note	2) stores last node in tmp
 * @note	3) updates scond-last's next pointer to NULL
 * @note	4) updates tmp (last node) to point to top
 */
void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
}

// Shifts down all elements of stack a by 1
void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

// Shifts down all elements of stack b by 1
void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

// Shifts down all elements of stack a and stack b by 1
void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}

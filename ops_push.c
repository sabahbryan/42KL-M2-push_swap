/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:34 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/10 19:37:06 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Pushes top node of source stack to destination stack
 * @param dst destination stack
 * @param src source stack
 * @var tmp pointer to store node
 * @return if source stack is empty (NULL), return immediately
 * @note	1) stores top node of source stack in tmp
 * @note	2) updates source stack to next node
 * @note	3) updates tmp to point to destination stack
 * @note	4) moves tmp to top of destination stack
 */
void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

// Pushes the top element of stack b to stack a
void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

// Pushes the top element of stack a to stack b
void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_printf("pb\n");
}

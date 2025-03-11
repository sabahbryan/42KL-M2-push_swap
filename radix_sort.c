/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:14 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/11 22:56:02 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief
 * @param stack
 * @var max
 * @var max_bits
 * @return max_bits
 * @note	1)
 * @note	2)
 */
int	get_max_bits(t_stack *stack)
{
	int	max;
	int	max_bits;

	max = stack->value;
	max_bits = 0;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	while (max >> max_bits)
		max_bits++;
	return (max_bits);
}

/**
 * @brief
 * @param a
 * @param b
 * @var max_bits
 * @var size
 * @var i
 * @var j
 * @return none
 * @note	1)
 * @note	2)
 */
void	radix_sort(t_stack **a, t_stack **b)
{
	int	max_bits;
	int	size;
	int	i;
	int	j;

	size = stack_size(*a);
	max_bits = get_max_bits(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->value >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

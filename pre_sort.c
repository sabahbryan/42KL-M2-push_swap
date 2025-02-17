/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:11:03 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 22:05:26 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort_to_b(t_stack *a, t_stack *b, int total_elements, int grp_size)
{
	int		low;
	int		high;
	int		i;
	t_node	*current;

	low = 1;
	high = grp_size;
	while (a->size > 0)
	{
		i = 0;
		while (i < total_elements && a->size > 0)
		{
			current = a->top;
			if (current->value >= low && current->value <= high)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		low += grp_size;
		high += grp_size;
	}
}
// Push the number to stack 'b'
// Rotate stack 'a' to bring the next number to the top
// Move to the next range
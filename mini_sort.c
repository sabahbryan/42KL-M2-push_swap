/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:27:40 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 18:27:20 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief	?
 * @param	a	 ?
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

/**
 * @brief	?
 * @param	a	 ?
 * @param	b	 ?
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	sort_five(t_stack *a, t_stack *b)
{
	int		min;
	int		i;
	t_node	*current;

	i = 0;
	while (i < 2)
	{
		current = a->top;
		min = current->value;
		while (current)
		{
			if (current->value < min)
				min = current->value;
			current = current->next;
		}
		while (a->top->value != min)
		{
			if (a->top->next->value == min)
				sa(a);
			else
				ra(a);
		}
		pb(a, b);
		i++;
	}
	sort_three(a);
	pa(b, a);
	pa(b, a);
}

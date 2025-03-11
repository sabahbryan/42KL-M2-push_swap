/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:41:21 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/11 23:21:21 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Sorts a stack with two elements
 * @param a pointer to stack 'a'
 * @return none
 * @note	if (1st > 2nd), swap
 */
void	sort_two(t_stack **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

/**
 * @brief Sorts a stack with three elements
 * @param a pointer to stack 'a'
 * @var first	first/top element
 * @var second	second/middle element
 * @var third	third/last element
 * @return none
 * @note	1) if (1st > 3rd > 2nd):
 * @note	2) if (2nd > 1st > 3rd): 
 * @note	3) if (2nd > 3rd > 1st): 
 * @note	4) if (3rd > 1st > 2nd):
 * @note	5) if (3rd > 2nd > 1st):
 */
void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;

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

// 	if (first < second && second > third && first > third)  
// 		sa(a);  // Swap first and second
// 	else if (first < second && second < third)  
// 	{
// 		sa(a);  // Swap first and second
// 		rra(a); // Reverse rotate
// 	}
// 	else if (first < second && second > third && first < third)  
// 		ra(a);  // Rotate up
// 	else if (first > second && second < third && first > third)  
// 	{
// 		sa(a);  // Swap first and second
// 		ra(a);  // Rotate up
// 	}
// 	else if (first > second && second < third && first < third)  
// 		rra(a); // Reverse rotate
}

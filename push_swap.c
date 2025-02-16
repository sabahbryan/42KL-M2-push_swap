/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:47 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 16:54:52 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief	?
 * @param	stack	 pointer to the stack
 * @var		?
 * @return	1)
 * @note	1) 
 */
int	is_sorted(t_stack *stack)
{
	t_node *current;

	current = stack->top;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

/**
 * @brief	?
 * @param	a	 ?
 * @param	b	 ?
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	small_sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		if (a->top->value > a->top->next->value)
			sa(a);
		return;
	}
	if (a->size == 3)
		sort_three(a);
	else
		sort_five(a, b);
}

// void small_sort(t_stack *a, t_stack *b)
// {
//     if (a->size == 2)
//         sa(a);
//     else if (a->size == 3)
//         sort_three(a);
//     else if (a->size <= 5)
//         sort_five(a, b);
// }

/**
 * @brief	?
 * @param	a	 ?
 * @param	b	 ?
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;
	int	num;

	if (is_sorted(a))
		return ;

	if (a->size <= 5)
	{
		small_sort(a, b);
		return;
	}

	size = a->size;
	max_bits = 0;
	i = 0;

	while ((size - 1) >> max_bits)
		max_bits++;

	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = a->top->value;
			if ((num >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->size > 0)
			pa(b, a);
		if (is_sorted(a))
			return;
		i++;
	}
}

// void radix_sort(t_stack *a, t_stack *b)
// {
//     int max_bits;
//     int i;
//     int j;
//     int size;
//     int num;

//     if (is_sorted(a))
//         return;

//     if (a->size <= 5)
//     {
//         small_sort(a, b);
//         return;
//     }

//     size = a->size;
//     max_bits = 0;
//     i = 0;

//     while ((size - 1) >> max_bits)
//         max_bits++;

//     while (i < max_bits)
//     {
//         j = 0;
//         while (j < size)
//         {
//             num = a->top->value;
//             if ((num >> i) & 1)
//                 ra(a);
//             else
//                 pb(a, b);
//             j++;
//         }
//         while (b->size > 0)
//             pa(b, a);
//         if (is_sorted(a))
//             return;
//         i++;
//     }
// }

/**
 * @brief	?
 * @param	argc	 ?
 * @param	argv	 ?
 * @var		?
 * @return	1)
 * @note	1) 
 */
int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc < 2)
		return (0);  // No numbers to sort

	a = init_stack();
	b = init_stack();
	if (!a || !b)
		return (1);  // Memory allocation failed

	init_stack_a(a, argv);

	// Call sorting function here
	radix_sort(a, b);

	return (0);
}

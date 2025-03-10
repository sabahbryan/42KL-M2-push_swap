/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:14 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/10 19:20:29 by bryaloo          ###   ########.fr       */
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

/**
 * @brief
 * @param a
 * @param b
 * @var size
 * @return none
 * @note	1)
 * @note	2)
 */
void	push_swap(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else
		radix_sort(a, b);
}

/**
 * @brief
 * @param argc
 * @param argv
 * @var a
 * @var b
 * @var new_node
 * @var i
 * @var value
 * @return 1)
 * @return 2)
 * @return 3)
 * @note	1)
 * @note	2)
 */
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*new_node;
	int		i;
	int		value;

	a = NULL;
	b = NULL;
	if (argc < 2)
	{
		ft_printf("Usage: ./push_swap <numbers>\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		new_node = create_node(value);
		if (!new_node)
		{
			free_stack(a);
			return (1);
		}
		new_node->next = a;
		a = new_node;
		i++;
	}
	push_swap(&a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}
// Parse arguments and populate stack 'a'
// Free the stack if allocation fails
// Add the new node to the top of the stack
// Update the top of the stack
// Sort the stack
// Free stacks
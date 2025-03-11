/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:55:24 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/11 22:55:52 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

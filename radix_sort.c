/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:59:14 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/09 21:28:18 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int argc, char **argv)
{
    t_stack *a = NULL;
    t_stack *b = NULL;
    int i;
    int value;

    if (argc < 2)
    {
        printf("Usage: %s <numbers>\n", argv[0]);
        return (1);
    }

    // Parse arguments and populate stack 'a'
    i = 1;
    while (i < argc)
    {
        value = ft_atoi(argv[i]);
        push(&a, create_node(value));
        i++;
    }

    // Sort the stack
    push_swap(&a, &b);

    // Free stacks
    free_stack(a);
    free_stack(b);

    return (0);
}

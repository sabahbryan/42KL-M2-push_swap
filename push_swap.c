/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:55:24 by bryaloo           #+#    #+#             */
/*   Updated: 2025/03/11 23:20:23 by bryaloo          ###   ########.fr       */
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
	//t_stack	*new_node;
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
		//new_node = create_node(value);
        append_node(&a, value); // Use append_node instead of front insertion
		// if (!new_node)
		// {
		// 	free_stack(a);
		// 	return (1);
		// }
		// new_node->next = a;
		// a = new_node;
		i++;
	}
    ft_printf("Initial stack:\n"); //debug
	print_stack(a);
    
	push_swap(&a, &b);

    ft_printf("Sorted stack:\n"); //debug
	print_stack(a);

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

void	append_node(t_stack **stack, int value)
{
	t_stack *new_node = create_node(value);
	t_stack *current;

	if (!new_node)
		return ;
	if (!*stack) // If stack is empty, set new_node as the top
	{
		*stack = new_node;
		return ;
	}
	current = *stack;
	while (current->next) // Traverse to the last node
		current = current->next;
	current->next = new_node; // Append the new node
}

void	print_stack(t_stack *stack) //debugging
{
	while (stack)
	{
		ft_printf("%d -> ", stack->value);
		stack = stack->next;
	}
	ft_printf("NULL\n");
}
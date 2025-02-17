/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:39:22 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 17:57:18 by bryaloo          ###   ########.fr       */
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
t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

/**
 * @brief	?
 * @param	stack	 pointer to the stack
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	push_to_stack(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}

/**
 * @brief	?
 * @param	stack	 pointer to the stack
 * @var		?
 * @return	1)
 * @note	1) 
 */
void	init_stack_a(t_stack *a, char **argv)
{
	int	i;
	int	value;

	i = 1;
	while (argv[i])
	{
		value = atoi(argv[i]);
		push_to_stack(a, value);
		i++;
	}
}
// Convert input to integer
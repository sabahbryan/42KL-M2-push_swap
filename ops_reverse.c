/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:02 by bryaloo           #+#    #+#             */
/*   Updated: 2024/09/09 15:26:07 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

//REVERSE ROTATE OPERATIONS
//rra
//rrb
//rrr

void reverse_rotate(t_stack *stack) {
    if (stack->size < 2)  // No need to reverse rotate if less than two elements
        return;

    t_node *prev = NULL;
    t_node *current = stack->top;

    while (current->next) {  // Traverse to the last node
        prev = current;
        current = current->next;
    }

    if (prev)
        prev->next = NULL;   // Break the link to the last node
    current->next = stack->top;  // Move the last node to the top
    stack->top = current;  // Update the top
}

void rra(t_stack *a) {
    reverse_rotate(a);
}

void rrb(t_stack *b) {
    reverse_rotate(b);
}

void rrr(t_stack *a, t_stack *b) {
    reverse_rotate(a);
    reverse_rotate(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:11 by bryaloo           #+#    #+#             */
/*   Updated: 2024/09/09 15:26:16 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

//ROTATE OPERATIONS
//ra
//rb
//rr

void rotate(t_stack *stack) {
    if (stack->size < 2) // No need to rotate if the stack has less than two elements
        return;

    t_node *first = stack->top;
    stack->top = first->next; // Move the top to the second node

    t_node *current = stack->top;
    while (current->next)    // Traverse to the last node
        current = current->next;

    current->next = first;  // Link last node to the old top
    first->next = NULL;     // Old top is now the last node
}

void ra(t_stack *a) {
    rotate(a);
}

void rb(t_stack *b) {
    rotate(b);
}

void rr(t_stack *a, t_stack *b) {
    rotate(a);
    rotate(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:17 by bryaloo           #+#    #+#             */
/*   Updated: 2024/09/09 15:26:22 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

//SWAP OPERATIONS
//sa
//sb
//ss

void swap(t_stack *stack) {
    if (stack->size < 2) // No need to swap if the stack has less than two elements
        return;

    t_node *first = stack->top;
    t_node *second = first->next;

    first->next = second->next;
    second->next = first;
    stack->top = second;
}

void sa(t_stack *a) {
    swap(a);
}

void sb(t_stack *b) {
    swap(b);
}

void ss(t_stack *a, t_stack *b) {
    swap(a);
    swap(b);
}

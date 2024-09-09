/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:40 by bryaloo           #+#    #+#             */
/*   Updated: 2024/09/09 15:25:45 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

//PUSH OPERATIONS
//pa
//pb

void push(t_stack *from, t_stack *to) {
    if (from->size == 0)  // No elements to push
        return;

    t_node *temp = from->top;
    from->top = from->top->next;  // Remove top element from 'from' stack
    temp->next = to->top;         // Insert it on top of 'to' stack
    to->top = temp;

    from->size--;  // Update sizes
    to->size++;
}

void pa(t_stack *a, t_stack *b) {
    push(b, a);
}

void pb(t_stack *a, t_stack *b) {
    push(a, b);
}
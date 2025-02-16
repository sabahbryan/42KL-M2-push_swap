/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:11:03 by bryaloo           #+#    #+#             */
/*   Updated: 2025/02/16 16:55:58 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pre_sort_to_b(t_stack *a, t_stack *b, int total_elements, int group_size)
{
    int low = 1;
    int high = group_size;
    int i, j;
    t_node *current;

    while (a->size > 0)
    {
        i = 0;
        while (i < total_elements && a->size > 0)
        {
            current = a->top;
            if (current->value >= low && current->value <= high)
            {
                pb(a, b);  // Push the number to stack 'b'
            }
            else
            {
                ra(a);     // Rotate stack 'a' to bring the next number to the top
            }
            i++;
        }
        // Move to the next range
        low += group_size;
        high += group_size;
    }
}


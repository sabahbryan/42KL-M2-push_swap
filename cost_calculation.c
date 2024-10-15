/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:27:01 by bryaloo           #+#    #+#             */
/*   Updated: 2024/10/15 17:29:06 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int	find_position_in_a(t_stack *a, int value)
{
	t_node *current = a->top;
	int position = 0;

    // Case 1: When the element should be inserted before the first element in "a"
	if (value < current->value && value > a->top->next->value)
	{
		return 0; // The new element will be the new head
	}

    // Traverse through stack "a" to find the correct position
    while (current->next)
	{
		if (value > current->value && value < current->next->value)
			return position + 1;
		current = current->next;
		position++;
    }
    
    // Case 2: If the value is greater than all elements, insert at the end
	return position + 1;
}

int	calculate_rotate_cost(int current_position, int size) {
	return current_position; // Cost is the current position index
}

int	calculate_reverse_rotate_cost(int current_position, int size) {
	return size - current_position; // Cost is total size minus current position
}

typedef struct s_cost
{
	int total_cost;
	int a_moves;  // Moves required in stack "a"
	int b_moves;  // Moves required in stack "b"
	int use_rr;   // Indicates if we should use `rr` or `rrr`
}	t_cost;

t_cost	calculate_cost(t_stack *a, t_stack *b, int b_position) {
	int a_position = find_position_in_a(a, get_element_at_position(b, b_position)); // Determine position in stack "a"
    
	int ra_cost = calculate_rotate_cost(a_position, a->size);
	int rb_cost = calculate_rotate_cost(b_position, b->size);
	int rra_cost = calculate_reverse_rotate_cost(a_position, a->size);
	int rrb_cost = calculate_reverse_rotate_cost(b_position, b->size);
    
	t_cost cost;
    
    // Determine the optimal combination of operations
	if (ra_cost + rb_cost < rra_cost + rrb_cost)
	{
        // Case 1: Using `ra` and `rb` is cheaper
		cost.total_cost = ra_cost + rb_cost;
		cost.a_moves = ra_cost;
		cost.b_moves = rb_cost;
		cost.use_rr = 1;  // Use combined rotations `rr`
    }
	else
	{
        // Case 2: Using `rra` and `rrb` is cheaper
		cost.total_cost = rra_cost + rrb_cost;
		cost.a_moves = rra_cost;
		cost.b_moves = rrb_cost;
		cost.use_rr = 0;  // Use combined rotations `rrr`
    }
    
    // Consider mixed rotations (`ra` + `rrb` or `rra` + `rb`)
    if (ra_cost + rrb_cost < cost.total_cost)
	{
		cost.total_cost = ra_cost + rrb_cost;
		cost.a_moves = ra_cost;
		cost.b_moves = rrb_cost;
		cost.use_rr = 0; // Not using combined rotations
    }
    if (rra_cost + rb_cost < cost.total_cost) {
		cost.total_cost = rra_cost + rb_cost;
		cost.a_moves = rra_cost;
		cost.b_moves = rb_cost;
		cost.use_rr = 0; // Not using combined rotations
    }
    return cost;
}

//B
int	find_min_cost_move(t_stack *a, t_stack *b) {
	t_cost min_cost;
	min_cost.total_cost = INT_MAX;  // Start with the maximum possible cost

	int min_cost_index = 0;

	for (int i = 0; i < b->size; i++) {
		t_cost current_cost = calculate_cost(a, b, i);
        
		if (current_cost.total_cost < min_cost.total_cost) {
			min_cost = current_cost;
			min_cost_index = i;
		}
	}

	return min_cost_index; // Return the index of the optimal move in stack "b"
}
*/

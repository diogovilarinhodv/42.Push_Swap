/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:31:47 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/16 10:59:11 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	is_reverse_rotate(int *stack)
{
	int first;
	int	second;
	int	third;

	first = *stack;
	second = *(stack + 1);
	third = *(stack + 2);
	if (first > second && first < third && second < third)
		return (1);
	else
		return (0);
}

static int	is_rotate(int *stack)
{
	int first;
	int	second;
	int	third;

	first = *stack;
	second = *(stack + 1);
	third = *(stack + 2);
	if (first < second && first < third && second > third)
		return (1);
	else
		return (0);
}

void	sort_low_b(t_stacks *stack)
{
	while (is_sorted_high_to_low(stack->b.value, stack->b.qty) == 0)
	{
		if (stack->b.qty == 2)
			sb(stack);
		else
		{
			if (is_reverse_rotate(stack->b.value) == 1)
				rrb(stack);
			else if (is_rotate(stack->b.value) == 1)
				rb(stack);
			else
				sb(stack);
		}
	}
}
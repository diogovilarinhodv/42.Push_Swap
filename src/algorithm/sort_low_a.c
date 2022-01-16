/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:31:35 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/16 10:58:48 by dpestana         ###   ########.fr       */
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
	if (first < second && first > third && second > third)
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
	if (first > second && first > third && second < third)
		return (1);
	else
		return (0);
}

void	sort_low_a(t_stacks *stack)
{
	while (is_sorted_low_to_high(stack->a.value, stack->a.qty) == 0)
	{
		if (stack->a.qty == 2)
			sa(stack);
		else
		{
			if (is_reverse_rotate(stack->a.value) == 1)
				rra(stack);
			else if (is_rotate(stack->a.value) == 1)
				ra(stack);
			else
				sa(stack);
		}
	}
}

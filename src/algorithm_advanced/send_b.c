/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:39:47 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/09 23:31:52 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	get_first(t_stacks *stack)
{
	if (*stack->a.value > *(stack->a.value + 1))
		if (*stack->a.value > *(stack->a.value + 2))
			return (*stack->a.value);
	if (*(stack->a.value + 1) > *stack->a.value)
		if (*(stack->a.value + 1) > *(stack->a.value + 2))
			return (*(stack->a.value + 1));
	return (*(stack->a.value + 2));
}

static int	get_third(t_stacks *stack)
{
	if (*stack->a.value < *(stack->a.value + 1))
		if (*stack->a.value < *(stack->a.value + 2))
			return (*stack->a.value);
	if (*(stack->a.value + 1) < *stack->a.value)
		if (*(stack->a.value + 1) < *(stack->a.value + 2))
			return (*(stack->a.value + 1));
	return (*(stack->a.value + 2));
}

static int	get_second(t_stacks *stack)
{
	int	first;
	int	third;

	first = get_first(stack);
	third = get_third(stack);
	if (first != *stack->a.value && third != *stack->a.value)
		return (*stack->a.value);
	if (first != *(stack->a.value + 1) && third != *(stack->a.value + 1))
		return (*(stack->a.value + 1));
	if (first != *(stack->a.value + 2) && third != *(stack->a.value + 2))
		return (*(stack->a.value + 2));
	if (*stack->a.value == *(stack->a.value + 1))
		return (*(stack->a.value + 1));
	return (*(stack->a.value + 2));
}

void	send_b(t_stacks *stack)
{
	int	first;
	int	second;
	int	third;
	int	third_biggest;

	first = get_first(stack);
	second = get_second(stack);
	third = get_third(stack);
	third_biggest = third_biggest_element(stack, first, second, third);
	while (stack->a.qty > 3)
	{
		if (third_biggest > *stack->a.value)
		{
			pb(stack);
			sort_stack_b(stack);
		}
		else
			ra(stack);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:31:35 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:15:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_low(t_stacks *stack)
{
	while (stack_is_sorted(stack->a.value, stack->a.qty) == 0)
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

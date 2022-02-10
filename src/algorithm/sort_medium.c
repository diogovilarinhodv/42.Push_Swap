/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:27:51 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/10 00:09:15 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_medium(t_stacks *stack)
{
	while (stack_is_sorted(stack->a.value, stack->a.qty) == 0)
	{
		send_b_medium(stack);
		if (stack->a.qty == 3)
		{
			sort_low(stack);
			sort_low_b(stack);
		}
		while (stack->b.qty != 0)
			pa(stack);
	}
}

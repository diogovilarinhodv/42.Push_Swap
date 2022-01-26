/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:34 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:28:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stacks *stack)
{
	if (stack_is_sorted(stack->a.value, stack->a.qty) == 0 || stack->b.qty > 0)
	{
		if (stack->a.qty <= 3)
			sort_low(stack);
		else if (stack->a.qty <= 6)
			sort_medium(stack);
		else
			sort_advanced(stack);
	}
}

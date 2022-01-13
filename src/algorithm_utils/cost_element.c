/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:10:27 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:17:05 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	cost_element(t_stacks *stack, int a, int b)
{
	if (*(stack->a.value + a) > *(stack->b.value + b))
	{
		if (stack->b.qty / 2 > b)
			stack->cost.b = b;
		else
			stack->cost.b = stack->b.qty - b;
		if (stack->a.qty / 2 > a)
			stack->cost.a = a;
		else
			stack->cost.a = stack->a.qty - a;
		return (1);
	}
	return (0);
}
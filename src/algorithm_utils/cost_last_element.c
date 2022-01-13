/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_last_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:11:26 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:21:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	cost_last_element(t_stacks *stack, int a, int b)
{
	if (a == stack->a.qty - 1)
	{
		stack->cost.b = b;
		stack->cost.a = 1;
	}
}

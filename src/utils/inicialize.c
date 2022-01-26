/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:22 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 10:51:59 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	inicialize(t_stacks *stack, int argc, char **argv)
{
	stack->a.value = NULL;
	stack->a.qty = 0;
	stack->b.value = NULL;
	stack->b.qty = 0;
	stack->sorted_a.value = NULL;
	stack->sorted_a.qty = 0;
	stack->median = 0;
	stack->absolute_median = 0;
	stack->output = 1;
	stack_alloc(stack, &(stack->a.value), argc - 1);
	stack_fill(&(stack->a.value), &stack->a.qty, argv, argc - 1);
	stack_alloc(stack, &(stack->sorted_a.value), stack->a.qty);
	stack_refill(stack->sorted_a.value, stack->a.value, stack->a.qty);
	stack_sort(stack->sorted_a.value, stack->a.qty);
	stack_median(stack->sorted_a.value, stack->a.qty, &(stack->absolute_median));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:47:01 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/09 20:25:36 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_alloc(t_stacks *stack, int **stack_for_alloc, int qty_for_alloc)
{
	if (*stack_for_alloc != NULL)
		free(*stack_for_alloc);
	*stack_for_alloc = (int *) malloc(qty_for_alloc * sizeof(int));
	if (*stack_for_alloc == NULL)
		program_over(stack, 1);
}

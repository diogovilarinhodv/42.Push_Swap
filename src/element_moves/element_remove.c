/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:33:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:18:18 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_remove(t_stacks *stacks, int **stack, int *qty)
{
	int		*new_stack;

	new_stack = NULL;
	if (*qty == 1)
	{
		(*qty)--;
		if (*stack != NULL)
			free(*stack);
		*stack = NULL;
	}
	else if (*qty > 1)
	{
		(*qty)--;
		stack_alloc(stacks, &new_stack, *qty);
		stack_refill(new_stack, (*stack + 1), *qty);
		if (*stack != NULL)
			free(*stack);
		*stack = new_stack;
	}
}

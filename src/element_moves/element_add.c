/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:34:29 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:17:48 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_add(t_stacks *stacks, int **stack, int element, int *qty)
{
	int		*new_stack;

	new_stack = NULL;
	stack_alloc(stacks, &new_stack, (*qty) + 1);
	*(new_stack) = element;
	stack_refill((new_stack + 1), *stack, *qty);
	if (*stack != NULL)
		free(*stack);
	*stack = new_stack;
	(*qty)++;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:47:01 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/08 20:14:38 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		stack_alloc

	Parameters:

		"int *stack"				-	Stack.
		"int **stack_for_alloc"		-	Stack to allocate.
		"int qty_for_alloc"			-	Quantity of values in stack to allocate.

	Return:

		nothing.

	Info:

		"*stack_for_alloc = (int*) malloc(qty_for_alloc * sizeof(int))"		-	Allocates memory and set it to "*stack_for_alloc" stack.
		"if (*stack_for_alloc == NULL)"										-	Checks if malloc fails...
			"error_alloc_mem(stack);"										-	Deal with malloc errors.

*/

void	stack_alloc(t_stacks *stack, int **stack_for_alloc, int qty_for_alloc)
{
	if (*stack_for_alloc != NULL)
		free(*stack_for_alloc);
	*stack_for_alloc = (int*) malloc(qty_for_alloc * sizeof(int));
	if (*stack_for_alloc == NULL)
		error_alloc_mem(stack);
}

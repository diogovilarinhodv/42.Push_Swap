/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:34:29 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/09 01:47:20 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		element_add

	Parameters:

		"t_stacks *stacks"	-	Stacks.
		"int **stack"		-	Stack.
		"int element"		-	New element.
		"int *qty"			-	Qty of values in stack.

	Return:

		nothing.

	Info:

		"stack_alloc(stacks, &new_stack, (*qty) + 1)"	-	Allocate the new stack for the new element.
		"*(new_stack) = element"						-	Set the new element at the top of the new stack.
		"stack_refill((new_stack + 1), *stack, *qty)"	-	Fill the new stack A with the old stack.
		"if (*stack != NULL)	free(*stack)"			-	Free the old stack.
		"*stack = new_stack"							-	Set to the variable "*stack".
		"(*qty)++"										-	Increase by one the qty of the stack elements.
		
*/

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

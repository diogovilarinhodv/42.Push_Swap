/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_refill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:58 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:24:17 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		stack_refill

	Parameters:

		"int **stack"			-	Stack.
		"int *qty"				-	Quantity of values in stack.
		"char **argv"			-	Array bidimensional that contains the input arguments.
		"int argc"				-	Quantity of input arguments.

	Return:

		nothing.

	Info:

		"while (inc < qty)"								-	Cycle will run when "inc" have a bigger value than "qty".
			"*((*stack) + inc) = *((*content) + inc)"	-	Set the "content" to the "stack". 
			"inc++"										-	Increate "inc" value.

*/

void	stack_refill(int *new_stack, int *old_stack, int qty)
{
	int	inc;

	inc = 0;
	while (inc < qty)
	{
		*(new_stack + inc) = *(old_stack + inc);
		inc++;
	}
}

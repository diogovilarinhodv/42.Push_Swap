/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:58 by dpestana          #+#    #+#             */
/*   Updated: 2021/12/30 19:47:56 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		stack_fill

	Parameters:

		"int **stack"			-	Stack.
		"int *qty"				-	Quantity of values in stack.
		"char **argv"			-	Array bidimensional that contains the input arguments.
		"int argc"				-	Quantity of input arguments.

	Return:

		nothing.

	Info:

		"while (*qty < argc)"								-	Cycle will run when "max" have a bigger value than "*qty".
			"*((*stack) + *qty) = ft_atoi(argv[*qty + 1])"	-	Set the arguments value to the stack. 
			"(*qty)++"										-	Increate "*qty" value.

*/

void	stack_fill(int **stack, int *qty, char **argv, int argc)
{
	while (*qty < argc)
	{
		*((*stack) + *qty) = ft_atoi(argv[*qty + 1]);
		(*qty)++;
	}
}

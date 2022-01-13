/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_without_operations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:29:22 by dpestana          #+#    #+#             */
/*   Updated: 2021/12/30 19:49:30 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		stack_sort

	Parameters:

		"int *stack"	-	Stack to sort without operations.
		"int qty"		-	Quantity of values of stack to sort without operations.

	Return:

		nothing.

	Info:

		"while (x < qty)"								-	Cycle runs when "qty" is bigger than "x"
			"while (y < qty)"							-	Cycle runs when "qty" is bigger than "y"
				"if (*(stack + x) > *(stack + y))"		-	If		stack in x position		is bigger than		stack in y position...
					"tmp = *(stack + y)"				-	Change values.
					"*(stack + y) = *(stack + x)"		-	Change values.
					"*(stack + x) = tmp"				-	Change values.
				"y++"									-	Increase "y" variable.
			"x++"										-	Increase "x" variable.
			"y = x + 1"									-	Set "y" variable with "x" variable + 1

*/

void	stack_sort(int *stack, int qty)
{
	int	x;
	int	y;
	int	tmp;

	x = 0;
	y = 1;
	tmp = 0;
	while (x < qty)
	{
		while (y < qty)
		{
			if (*(stack + x) > *(stack + y))
			{
				tmp = *(stack + y);
				*(stack + y) = *(stack + x);
				*(stack + x) = tmp;
			}
			y++;
		}
		x++;
		y = x + 1;
	}
}

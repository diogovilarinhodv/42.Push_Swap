/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:45:26 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/09 02:34:10 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		is_sorted

	Parameters:

		"int *stack"	-	Stack.
		"int qty"		-	Quantity of elements of the stack.

	Return:

		"int 0"	-	If stack isnt sorted.
		"int 1"	-	If stack is sorted.

	Info:

		"inc = 1"															-	Set 1 to variable "inc".
		"while (inc < qty)"													-	Cycles runs when variable "inc" is lower than "qty".
			"if (*(stack + inc - 1) < *(stack + inc))		inc++"			-	Compare the value of position before with the next of stack A, if next position have bigger value, increase variable "inc".
			"else											break"			-	If next position doesnt have bigger value, break the cycle.
		"if (inc == qty)									return (1)"		-	If variable "inc" is equals to "qty", is because stack A is sorted, so... return 1.
		"return (0)"														-	returns 0.
*/

int	is_sorted_low_to_high(int *stack, int qty)
{
	int	inc;

	inc = 1;
	while (inc < qty)
	{
		if (*(stack + inc - 1) < *(stack + inc))
			inc++;
		else
			break;
	}
	if (inc == qty)
		return (1);
	return (0);
}

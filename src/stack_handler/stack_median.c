/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_median.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:11:36 by dpestana          #+#    #+#             */
/*   Updated: 2021/12/30 19:52:09 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		stack_median

	Parameters:

		"int *stack"			-	Stack.
		"int *qty"				-	Quantity of values in stack.
		"int *set_median"		-	Variable in the stack to set the median value.

	Return:

		nothing.

	Info:

		"*set_median = *(stack + (qty / 2))"				-	Set "*set_median" with the value of the middle number in stack.
		"if (qty % 2 == 0)"									-	Checks if qty is a pair number, if it is...
			"*set_median += *(stack + ((qty / 2) - 1))"		-	Set "*set_median" with the sum of both middle numbers (because is pair).
			"*set_median /= 2"								-	Set "*set_median" with the division by 2.

*/

void	stack_median(int *stack, int qty, int *set_median)
{
	*set_median = *(stack + (qty / 2));
	if (qty % 2 == 0)
	{
		*set_median += *(stack + ((qty / 2) - 1));
		*set_median /= 2;
	}
}
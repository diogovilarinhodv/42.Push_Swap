/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:58:06 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/13 09:02:11 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		error_alloc_mem

	Parameters:

		"t_stack *stack"	-	Struct stack that contains all data about the stacks.

	Return:

		nothing.

	Info:

		"write(1, "Memory allocation failed\n", 26)"		-	Shows "Memory allocation failed".
		"program_over(stack, 1)"							-	Exit the program.

*/

void	error_alloc_mem(t_stacks *stack)
{
	write(1, "Memory allocation failed!\n", 26);
	program_over(stack, 1);
}

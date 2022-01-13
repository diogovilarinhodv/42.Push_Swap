/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:19:59 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/08 10:52:32 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*

	Function: 
	
		main

	Parameters:

		"int argc"		-	Quantity of input arguments.
		"char **argv"	-	Array bidimensional that contains the input arguments.

	Return:

		"int 0"	-	If program runs without errors.
		"int 1"	-	If program runs with errors.

	Info:

		"check_input(argc, argv)"			-	Check for input errors.
		"inicialize(&stack)"				-	Prepare and set values to stacks to be ready to use.
		"sort(&stack)"						-	Sort with operations.
		"program_over(&stack, 0)"			-	Finish program.

*/

/*

	To Do

		Comments

		Verify (some arguments aren’t integers, some arguments are bigger than an integer, and/or there are duplicates)

		Study Sorts

		Create a advanced sort

*/

int	main(int argc, char **argv)
{
	t_stacks	stack;

	check_input(argc, argv);
	inicialize(&stack, argc, argv);
	sort(&stack);
	program_over(&stack, 0);
	return (0);
}

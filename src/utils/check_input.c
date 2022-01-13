/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:00:57 by dpestana          #+#    #+#             */
/*   Updated: 2021/12/30 14:46:13 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		check_input

	Parameters:

		"int argc"				-	Quantity of input arguments.
		"char **argv"			-	Array bidimensional that contains the input arguments.

	Return:

		nothing.

	Info:

		"if (argc < 2) error_args()"		-	Checks if args are wrong, if they are, "error_args()" handle it.
		""									-	Check if is a number.
		""									-	Check if are duplicated numbers.

*/

void	check_input(int argc, char **argv)
{
	(void) argv;
	if (argc < 2)
		error_args();
}
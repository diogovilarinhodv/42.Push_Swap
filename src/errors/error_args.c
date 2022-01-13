/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:51 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/13 09:02:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		error_args

	Parameters:

		nothing.

	Return:

		nothing.

	Info:

		write(1, "Quantity of args invalid\n", 26)"		-	Shows "Quantity of args invalid".
		"program_over(NULL, 1)"							-	Exit the program.

*/

void	error_args(void)
{
	write(1, "Quantity of args invalid!\n", 26);
	program_over(NULL, 1);
}

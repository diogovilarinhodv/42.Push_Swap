/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:32 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/03 21:45:10 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		element_swap

	Parameters:

		"int *value1"	-	Value of first position of stack.
		"int *value2"	-	Value of second position of stack.

	Return:

		nothing.

	Info:

		"tmp = *value1"			-	Set value of "value1" to tmp.
		"*value1 = *value2"		-	Set value of "value2" to "value1".
		"*value2 = tmp"			-	Set value of tmp to "value2".
		
*/

void	element_swap(int *value1, int *value2)
{
	int	tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

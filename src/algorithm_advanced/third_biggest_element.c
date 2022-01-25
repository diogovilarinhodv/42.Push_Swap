/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   third_biggest_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:46:43 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/24 19:46:50 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	third_biggest_element(t_stacks *stack, int first, int second, int third)
{
	int	inc;

	inc = 3;
	while (inc < stack->a.qty)
	{
		if (third < *(stack->a.value + inc))
		{
			if (second < *(stack->a.value + inc))
			{
				if (first < *(stack->a.value + inc))
				{
					third = second;
					second = first;
					first = *(stack->a.value + inc);
				}
				else
				{
					third = second;
					second = *(stack->a.value + inc);
				}
			}
			else
				third = *(stack->a.value + inc);
		}
		inc++;
	}
	return (third);
}

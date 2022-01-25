/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_biggest_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:46:43 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:40:39 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	third_biggest_element(t_stacks *stack, int f, int s, int t)
{
	int	inc;

	inc = 3;
	while (inc < stack->a.qty)
	{
		if (f < *(stack->a.value + inc))
		{
			t = s;
			s = f;
			f = *(stack->a.value + inc);
		}
		else if (s < *(stack->a.value + inc))
		{
			t = s;
			s = *(stack->a.value + inc);
		}
		else if (t < *(stack->a.value + inc))
			t = *(stack->a.value + inc);
		inc++;
	}
	return (t);
}

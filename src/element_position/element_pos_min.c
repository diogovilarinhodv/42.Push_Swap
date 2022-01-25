/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_pos_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:23:39 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:26:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_pos_min(int	*stack, int qty)
{
	int	inc;
	int	min_value;
	int	min_idx;

	inc = 0;
	min_idx = 0;
	min_value = *stack;
	while (inc < qty)
	{
		if (min_value > *(stack + inc))
		{
			min_value = *(stack + inc);
			min_idx = inc;
		}
		inc++;
	}
	return (min_idx);
}

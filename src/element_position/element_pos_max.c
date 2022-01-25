/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_pos_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:30:22 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/20 10:17:00 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_pos_max(int	*stack, int qty)
{
	int	inc;
	int max_value;
	int max_idx;

	inc = 0;
	max_idx = 0;
	max_value = *stack;
	while (inc < qty)
	{
		if (max_value < *(stack + inc))
		{
			max_value = *(stack + inc);
			max_idx = inc;
		}
		inc++;
	}
	return(max_idx); 
}

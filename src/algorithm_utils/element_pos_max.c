/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_pos_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:30:22 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/16 10:41:35 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_pos_max(int	*stack, int qty)
{
	int	inc;
	int max;

	inc = 0;
	max = *stack;
	while (inc < qty)
	{
		if (max < *(stack + inc))
			max = *(stack + inc);
		inc++;
	}
	return(max); 
}

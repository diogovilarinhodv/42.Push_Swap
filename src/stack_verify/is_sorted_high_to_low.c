/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_high_to_low.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:55:49 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:23:39 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted_high_to_low(int *stack, int qty)
{
	int	inc;

	inc = 1;
	while (inc < qty)
	{
		if (*(stack + inc - 1) > *(stack + inc))
			inc++;
		else
			break ;
	}
	if (inc == qty)
		return (1);
	return (0);
}

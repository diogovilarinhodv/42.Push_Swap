/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:45:26 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:12:15 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stack_is_sorted(int *stack, int qty)
{
	int	inc;

	inc = 1;
	while (inc < qty)
	{
		if (*(stack + inc - 1) < *(stack + inc))
			inc++;
		else
			break ;
	}
	if (inc == qty)
		return (1);
	return (0);
}

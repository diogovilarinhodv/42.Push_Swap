/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:19:27 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/23 10:19:42 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_sort(int *stack, int qty)
{
	int	x;
	int	y;
	int	tmp;

	x = 0;
	y = 1;
	tmp = 0;
	while (x < qty)
	{
		while (y < qty)
		{
			if (*(stack + x) > *(stack + y))
			{
				tmp = *(stack + y);
				*(stack + y) = *(stack + x);
				*(stack + x) = tmp;
			}
			y++;
		}
		x++;
		y = x + 1;
	}
}

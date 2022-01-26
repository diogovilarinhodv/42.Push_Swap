/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_refill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:58 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:15:40 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_refill(int *new_stack, int *old_stack, int qty)
{
	int	inc;

	inc = 0;
	while (inc < qty)
	{
		*(new_stack + inc) = *(old_stack + inc);
		inc++;
	}
}

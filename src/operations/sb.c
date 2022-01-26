/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:16 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:17:22 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sb(t_stacks *stack)
{
	if (!(stack->b.qty > 1))
		return (1);
	element_swap(stack->b.value, stack->b.value + 1);
	if (stack->output == 1)
		write(1, "sb\n", 3);
	return (0);
}

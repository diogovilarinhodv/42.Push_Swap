/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:19 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:59 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rrb(t_stacks *stack)
{
	if (stack->b.qty > 1)
		element_fall(&(stack->b.value), stack->b.qty);
	if (stack->output == 1)
		write(1, "rrb\n", 4);
	return (0);
}

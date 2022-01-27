/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:57 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 19:41:57 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rrr(t_stacks *stack)
{
	if (stack->output != 2)
		stack->output = 0;
	rra(stack);
	rrb(stack);
	if (stack->output != 2)
		stack->output = 1;
	if (stack->output == 1)
		write(1, "rrr\n", 4);
	return (0);
}

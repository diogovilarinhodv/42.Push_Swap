/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:03 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 19:41:55 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ss(t_stacks *stack)
{
	if (stack->output != 2)
		stack->output = 0;
	sa(stack);
	sb(stack);
	if (stack->output != 2)
		stack->output = 1;
	if (stack->output == 1)
		write(1, "ss\n", 3);
	return (0);
}

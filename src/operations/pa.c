/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:51:46 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:15 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pa(t_stacks *stack)
{
	if (!(stack->b.qty > 0))
		return (1);
	element_add(stack, &stack->a.value, *(stack->b.value), &(stack->a.qty));
	element_remove(stack, &stack->b.value, &(stack->b.qty));
	if (stack->output == 1)
		write(1, "pa\n", 3);
	return (0);
}

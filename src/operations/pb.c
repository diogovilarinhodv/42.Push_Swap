/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:53:37 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pb(t_stacks *stack)
{
	if (!(stack->a.qty > 0))
		return (1);
	element_add(stack, &stack->b.value, *(stack->a.value), &(stack->b.qty));
	element_remove(stack, &stack->a.value, &(stack->a.qty));
	if (stack->output == 1)
		write(1, "pb\n", 3);
	return (0);
}

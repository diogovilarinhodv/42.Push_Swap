/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:19:13 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:36 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rb(t_stacks *stack)
{
	if (stack->b.qty > 1)
		element_climb(&(stack->b.value), stack->b.qty);
	if (stack->output == 1)
		write(1, "rb\n", 3);
	return (0);
}

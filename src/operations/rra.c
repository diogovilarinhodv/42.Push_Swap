/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:11 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:50 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rra(t_stacks *stack)
{
	if (stack->a.qty > 1)
		element_fall(&(stack->a.value), stack->a.qty);
	if (stack->output == 1)
		write(1, "rra\n", 4);
	return (0);
}

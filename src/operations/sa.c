/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:22:11 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:17:13 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sa(t_stacks *stack)
{
	if (!(stack->a.qty > 1))
		return (1);
	element_swap(stack->a.value, stack->a.value + 1);
	if (stack->output == 1)
		write(1, "sa\n", 3);
	return (0);
}

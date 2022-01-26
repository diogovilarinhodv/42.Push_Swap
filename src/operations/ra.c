/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:01:13 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:31 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ra(t_stacks *stack)
{
	if (stack->a.qty > 1)
		element_climb(&(stack->a.value), stack->a.qty);
	if (stack->output == 1)
		write(1, "ra\n", 3);
	return (0);
}

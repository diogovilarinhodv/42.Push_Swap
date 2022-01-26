/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:22:30 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:16:53 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rr(t_stacks *stack)
{
	stack->output = 0;
	ra(stack);
	rb(stack);
	stack->output = 1;
	write(1, "rr\n", 3);
	return (0);
}

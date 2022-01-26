/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advanced.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:54:38 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:24:30 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_advanced(t_stacks *stack)
{
	send_b(stack);
	sort_low(stack);
	send_a(stack);
	sort_stack_a(stack);
}

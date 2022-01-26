/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:02:44 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 10:51:27 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	program_over(t_stacks *stack, int status)
{
	if (stack != NULL)
	{
		if (stack->a.value != NULL)
			free(stack->a.value);
		if (stack->b.value != NULL)
			free(stack->b.value);
		if (stack->sorted_a.value != NULL)
			free(stack->sorted_a.value);
	}
	if (status == 1)
		write(1, "Error\n", 6);
	exit(status);
}

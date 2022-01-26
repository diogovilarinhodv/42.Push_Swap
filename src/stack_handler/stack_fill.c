/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:58 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:15:30 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_fill(int **stack, int *qty, char **argv, int argc)
{
	while (*qty < argc)
	{
		*((*stack) + *qty) = ft_atoi(argv[*qty + 1]);
		(*qty)++;
	}
}

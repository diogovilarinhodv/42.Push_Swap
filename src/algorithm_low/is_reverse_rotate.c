/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:19:25 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:33:40 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_reverse_rotate(int *stack)
{
	int	first;
	int	second;
	int	third;

	first = *stack;
	second = *(stack + 1);
	third = *(stack + 2);
	if (first < second && first > third && second > third)
		return (1);
	else
		return (0);
}

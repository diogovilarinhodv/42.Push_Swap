/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_climb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:04:14 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:18:09 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_climb(int **stack, int qty)
{
	int	cnt;
	int	tmp;

	cnt = 0;
	tmp = *(*stack + cnt);
	while ((cnt + 1) < qty)
	{
		*(*stack + cnt) = *(*stack + (cnt + 1));
		cnt++;
	}
	*(*stack + cnt) = tmp;
}

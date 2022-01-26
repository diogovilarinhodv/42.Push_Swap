/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_fall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:38:48 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:18:05 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_fall(int **stack, int qty)
{
	int	cnt;
	int	tmp;

	cnt = (qty - 1);
	tmp = *(*stack + cnt);
	while (cnt > 0)
	{
		*(*stack + cnt) = *(*stack + (cnt - 1));
		cnt--;
	}
	*(*stack + cnt) = tmp;
}

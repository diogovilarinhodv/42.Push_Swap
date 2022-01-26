/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:32 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:18:25 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_swap(int *value1, int *value2)
{
	int	tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

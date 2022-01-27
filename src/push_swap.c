/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:19:59 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 15:24:10 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;

	check_input(argc, argv);
	inicialize(&stack, argc, argv);
	sort(&stack);
	program_over(&stack, 0);
	return (0);
}

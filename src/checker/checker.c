/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:55:32 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/27 17:21:24 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	inicialize_checker(t_stacks *stack, int argc, char **argv)
{
	stack->a.value = NULL;
	stack->a.qty = 0;
	stack->b.value = NULL;
	stack->b.qty = 0;
	stack->output = 2;
	stack->sorted_a.value = NULL;
	stack_alloc(stack, &(stack->a.value), argc - 1);
	stack_fill(&(stack->a.value), &stack->a.qty, argv, argc - 1);
}

static void	execute_operation(t_stacks *stack, char *line)
{
	if (ft_strncmp(line, "sa\n", ft_strlen(line)) == 0)
		sa(stack);
	else if (ft_strncmp(line, "sb\n", ft_strlen(line)) == 0)
		sb(stack);
	else if (ft_strncmp(line, "ss\n", ft_strlen(line)) == 0)
		ss(stack);
	else if (ft_strncmp(line, "pa\n", ft_strlen(line)) == 0)
		pa(stack);
	else if (ft_strncmp(line, "pb\n", ft_strlen(line)) == 0)
		pb(stack);
	else if (ft_strncmp(line, "ra\n", ft_strlen(line)) == 0)
		ra(stack);
	else if (ft_strncmp(line, "rb\n", ft_strlen(line)) == 0)
		rb(stack);
	else if (ft_strncmp(line, "rr\n", ft_strlen(line)) == 0)
		rr(stack);
	else if (ft_strncmp(line, "rra\n", ft_strlen(line)) == 0)
		rra(stack);
	else if (ft_strncmp(line, "rrb\n", ft_strlen(line)) == 0)
		rrb(stack);
	else if (ft_strncmp(line, "rrr\n", ft_strlen(line)) == 0)
		rrr(stack);
	else
		program_over(stack, 1);
}

int	main(int argc, char **argv)
{
	t_stacks	stack;
	char		*line;

	check_input(argc, argv);
	inicialize_checker(&stack, argc, argv);
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL || *line == '\n')
			break ;
		execute_operation(&stack, line);
		if (line != NULL)
			free(line);
	}
	if (stack_is_sorted(stack.a.value, stack.a.qty) == 1 && stack.b.qty == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (line != NULL)
		free(line);
	program_over(&stack, 0);
	return (0);
}

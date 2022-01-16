/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:00:57 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/15 10:17:57 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		check_input

	Parameters:

		"int argc"				-	Quantity of input arguments.
		"char **argv"			-	Array bidimensional that contains the input arguments.

	Return:

		nothing.

	Info:

		"if (argc < 2) error_args()"		-	Checks if args are wrong, if they are, "error_args()" handle it.
		""									-	Check if is a number.
		""									-	Check if are duplicated numbers.

*/

static int	is_number(char *str)
{
	int	inc;

	inc = 0;
	if (*(str + inc) == '+' || *(str + inc) == '-')
		inc++;
	while ('0' <= *(str + inc) && *(str + inc) <= '9')
		inc++;
	if (*(str + inc) == '\0' && '0' <= *(str + inc - 1) && *(str + inc - 1) <= '9')
		return (1);
	else
		return (0);
}

static int	is_integer(char *str)
{
	int		int_len;
	int		str_len;

	str_len = ft_strlen(str);
	int_len = 10;
	
	if (*str == '-' && str_len < int_len + 1)
		return (1);
	if (str_len < int_len)
		return (1);
	if (*str == '-' && ft_strncmp("2147483648", (str + 1), int_len) < 0)
		return (0);
	if (ft_strncmp("2147483647", str, int_len) < 0)
		return (0);
	return (1);
}

static int	is_duplicated(char **argv, int argc, int idx)
{
	int	inc;
	int	limit;

	if (idx == argc - 1)
		return (0);
	inc = idx + 1;
	limit = ft_strlen(*(argv + idx)) + 1;
	while (inc < argc)
	{
		if (ft_strncmp(*(argv + inc), *(argv + idx), limit) == 0)
			return (1);
		inc++;
	}
	return (0);
}

void	check_input(int argc, char **argv)
{
	int	inc;

	inc = 1;
	if (argc < 2)
		error_args();
	while (inc < argc)
	{
 		if (is_number(*(argv + inc)) == 0)
			program_over(NULL, 1);
		if (is_integer(*(argv + inc)) == 0)
			program_over(NULL, 1);
		if (is_duplicated(argv, argc, inc) == 1)
			program_over(NULL, 1);
		inc++;
	}
}
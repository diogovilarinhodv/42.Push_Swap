/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:22 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/08 20:30:42 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		inicialize

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.
		"int argc"				-	Quantity of input arguments.
		"char **argv"			-	Array bidimensional that contains the input arguments.

	Return:

		nothing.

	Info:

		"stack->a.value = NULL"															-	Set "NULL"	to variable "a"			of struct "a"	at struct "stack".
		"stack->a.qty = 0"																-	Set "0" 	to variable "qty"		of struct "a"	at struct "stack".
		"stack->a.median = 0"															-	Set "0" 	to variable "median"	of struct "a"	at struct "stack".
		"stack->b.value = NULL"															-	Set "NULL"	to variable "b"			of struct "b"	at struct "stack".
		"stack->b.qty = 0"																-	Set "0" 	to variable "qty"		of struct "b"	at struct "stack".
		"stack->b.median = 0"															-	Set "0" 	to variable "median"	of struct "b"	at struct "stack".
		"stack->output = 1"																-	Set "1" 	to variable "output"	of struct "stack".
		
		"stack->sorted_stack.c = NULL"													-	Set "NULL" 	to variable "c"			of struct "sorted_stack"	at struct "stack".
		"stack->sorted_stack.qty = 0"													-	Set "0" 	to variable "qty"		of struct "sorted_stack"	at struct "stack".
		"stack->sorted_stack.median = 0"												-	Set "0" 	to variable "median"	of struct "sorted_stack"	at struct "stack".
		
		"stack_alloc(stack, &(stack->a.value), argc - 1)"								-	Allocate stack A.
		"stack_fill(&(stack->a.value), &stack->a.qty, argv, argc - 1)"					-	Fill stack A with input values.
		
		"stack_alloc(stack, &(stack->sorted.value), argc - 1)"							-	Allocate stack sorted.
		"stack_fill(&(stack->sorted.value), &stack->sorted.qty, argv, argc - 1)"		-	Fill stack sorted with input values.
		
		"stack_sort(stack->sorted.value, stack->sorted.qty)"							-	Sort stack sorted without operations.
		"stack_median(stack->sorted.value, stack->sorted.qty, &(stack->sorted.median))"	-	Get median and set it to stack sorted median variable.

*/

void	inicialize(t_stacks *stack, int argc, char **argv)
{
	stack->a.value = NULL;
	stack->a.qty = 0;
	stack->a.median = 0;
	stack->b.value = NULL;
	stack->b.qty= 0;
	stack->b.median = 0;
	stack->output = 1;
	stack->sorted_a.value = NULL;
	stack->sorted_a.qty = 0;
	stack->sorted_a.median = 0;
	stack->sorted.value = NULL;
	stack->sorted.qty = 0;
	stack->sorted.median = 0;
	stack_alloc(stack, &(stack->a.value), argc - 1);
	stack_fill(&(stack->a.value), &stack->a.qty, argv, argc - 1);
	stack_alloc(stack, &(stack->sorted.value), argc - 1);
	stack_fill(&(stack->sorted.value), &stack->sorted.qty, argv, argc - 1);
	stack_sort(stack->sorted.value, stack->sorted.qty);
	stack_median(stack->sorted.value, stack->sorted.qty,
	 &(stack->sorted.median));
}

#include "includes/push_swap.h"
#include <stdio.h>

void	printer_tester(t_stacks *stack)
{
	int	cnt;

	if (stack->a.value != NULL)
	{
		cnt = 0;
		printf("Stack A:\n");
		while (cnt < stack->a.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->a.value + cnt));
			cnt++;
		}
		printf("\n");
	}	
	else
		printf("\nStack A: empty\n");
	if (stack->b.value != NULL)
	{
		cnt = 0;
		printf("Stack B:\n");
		while (cnt < stack->b.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->b.value + cnt));
			cnt++;
		}
		printf("\n");
	}
	else
		printf("Stack B: empty\n");
	if (stack->sorted.value != NULL)
	{
		cnt = 0;
		printf("Stack C:\n");
		while (cnt < stack->a.qty + stack->b.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->sorted.value + cnt));
			cnt++;
		}
		printf("\n");
	}	
	else
		printf("\nStack C: empty\n");
	printf("\n");
}

void	printer_tester_edges(t_stacks *stack)
{
	int	cnt;

	printf("------------------------------------------");
	printf("\n");

	if (stack->a.value != NULL)
	{
		cnt = 0;
		printf("Stack A:\n");
		while (cnt < stack->a.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->a.value + cnt));
			cnt++;
		}
		printf("\n");
	}	
	else
		printf("\nStack A: empty\n");
	if (stack->b.value != NULL)
	{
		cnt = 0;
		printf("Stack B:\n");
		while (cnt < stack->b.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->b.value + cnt));
			cnt++;
		}
		printf("\n");
	}
	else
		printf("Stack B: empty\n");
	if (stack->sorted.value != NULL)
	{
		cnt = 0;
		printf("Stack C:\n");
		while (cnt < stack->a.qty + stack->b.qty)
		{
			if (cnt > 0)
				printf(" - ");
			printf("%d", *(stack->sorted.value + cnt));
			cnt++;
		}
		printf("\n");
	}	
	else
		printf("\nStack C: empty\n");
	printf("------------------------------------------");
	printf("\n\n");
}

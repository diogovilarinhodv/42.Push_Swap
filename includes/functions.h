#ifndef FUNCTIONS_H
# define FUNCTIONS_H

// Libft
int		ft_atoi(const char *nptr);

// Utils
void	inicialize(t_stacks *stack, int argc, char **argv);
void	check_input(int argc, char **argv);
void	program_over(t_stacks *stack, int status);

// Stack_Handler
void	stack_alloc(t_stacks *stack, int **stack_for_alloc, int qty_for_alloc);
void	stack_fill(int **stack, int *qty, char **argv, int argc);
void	stack_refill(int *new_stack, int *old_stack, int qty);
void	stack_sort(int *stack, int qty);
void	stack_median(int *stack, int qty, int *set_median);

// Algorithm
void	sort(t_stacks *stack);
void	sort_low_a(t_stacks *stack);
void	sort_low_b(t_stacks *stack);
void	sort_medium(t_stacks *stack);
void	sort_advanced(t_stacks *stack);

// Algorithm Utils
void	reverse_operation_stack_a(t_stacks *stack);
void	operation_stack_a(t_stacks *stack);
void	operation_stack_b(t_stacks *stack);
int     cost_element(t_stacks *stack, int a, int b);
void	cost_last_element(t_stacks *stack, int a, int b);
void	cost_set(t_stacks *stack, int b);
int		is_sorted_low_to_high(int *stack, int qty);
int     is_sorted_high_to_low(int *stack, int qty);

// Operations
int		sa(t_stacks *stack);
int		sb(t_stacks *stack);
int		ss(t_stacks *stack);
int		pa(t_stacks *stack);
int		pb(t_stacks *stack);
int		ra(t_stacks *stack);
int		rb(t_stacks *stack);
int		rr(t_stacks *stack);
int		rra(t_stacks *stack);
int		rrb(t_stacks *stack);
int		rrr(t_stacks *stack);

// Elements Handler (Utilities for Operations)
void	element_swap(int *n1, int *n2);
void	element_remove(t_stacks *stacks, int **stack, int *qty);
void	element_add(t_stacks *stacks, int **stack, int element, int *qty);
void    element_climb(int **stack, int qty);
void	element_fall(int **stack, int qty);

// Errors handling
void	error_args(void);
void	error_alloc_mem(t_stacks *stack);

// Tester
void	printer_tester(t_stacks *stack);
void	printer_tester_edges(t_stacks *stack);

#endif
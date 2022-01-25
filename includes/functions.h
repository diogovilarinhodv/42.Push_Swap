#ifndef FUNCTIONS_H
# define FUNCTIONS_H

// Algorithm
void	sort(t_stacks *stack);
void	sort_low(t_stacks *stack);
void	sort_medium(t_stacks *stack);
void	sort_advanced(t_stacks *stack);

// Advanced algorithm
int		min_to_top_stacks(t_stacks *stack);
void	min_to_top_stack_a(t_stacks *stack, int inc);
void	min_to_top_stack_b(t_stacks *stack, int inc);
void	send_b(t_stacks *stack);
void	sort_stack_b(t_stacks *stack);
int		third_biggest_element(t_stacks *stack, int f, int s, int t);

// Low algorithm
int		is_reverse_rotate(int *stack);
int		is_rotate(int *stack);

// Element costs
int		element_cost_a(t_stacks *stack, int a, int b);
void	element_cost_b(t_stacks *stack, int b);
int		element_cost_pos_first(t_stacks *stack, int a, int b);
int		element_cost_pos_min(t_stacks *stack, int b);
int		element_cost_pos_max(t_stacks *stack, int b);
void	element_lowest_cost(t_stacks *stack);
void	element_set_costs(t_stacks *stack, int b);

// Element moves
void	element_add(t_stacks *stacks, int **stack, int element, int *qty);
void	element_climb(int **stack, int qty);
void	element_fall(int **stack, int qty);
void	element_remove(t_stacks *stacks, int **stack, int *qty);
void	element_swap(int *n1, int *n2);

// Element positions
int		element_pos_max(int	*stack, int qty);
int		element_pos_min(int	*stack, int qty);

// Errors handling
void	error_args(void);
void	error_alloc_mem(t_stacks *stack);

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

// Stack_Handler
void	stack_alloc(t_stacks *stack, int **stack_for_alloc, int qty_for_alloc);
void	stack_fill(int **stack, int *qty, char **argv, int argc);
void	stack_refill(int *new_stack, int *old_stack, int qty);
void	stack_median(int *stack, int qty, int *set_median);
void	stack_sort(int *stack, int qty);

// Stack verify
int		is_sorted_low_to_high(int *stack, int qty);
int		is_sorted_high_to_low(int *stack, int qty);

// Utils
void	inicialize(t_stacks *stack, int argc, char **argv);
void	check_input(int argc, char **argv);
void	program_over(t_stacks *stack, int status);

// Libft
int		ft_atoi(const char *nptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);

#endif
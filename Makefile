#################################################################################################
# 										VARIABLES												#
#################################################################################################

# Compiler
CC							=	gcc

# Flags for Compiler
C_FLAGS						=	-Wall -Wextra -Werror -fsanitize=address
NAME_FLAG 					=	-o
OBJ_FLAG 					=	-c

# Command for Library
AR							=	ar rc

# Folder Management
RM							=	rm -rf
CREATE_FOLDER 				=	mkdir -p

# Norminette
NORM 						=	norminette

# Library directory
LIB_FOLDER					=	lib

# Files
LIB_FILE					=	push_swap.a
HEADER_FILES				=	includes/push_swap.h											\
								includes/functions.h											\
								includes/structs.h
OBJ_FILES					=	${SRC_FILES:.c=.o}

#################################################################################################
# 										FILES													#
#################################################################################################

# Source files
SRC_FILES						=	$(ALGORITHM)												\
									$(ALGORITHM_ADVANCED)										\
									$(ALGORITHM_LOW)											\
									$(ELEMENT_COSTS)											\
									$(ELEMENT_MOVES)											\
									$(ELEMENT_POSITION)											\
									$(ERROR_HANDLING)											\
									$(OPERATIONS)												\
									$(STACK_HANDLING)											\
									$(STACK_VERIFY)												\
									$(UTILS)													\
									$(LIBFT)													\
									$(EXECUTABLE_FILE)

# Algorithm
ALGORITHM						=	src/algorithm/sort.c										\
									src/algorithm/sort_low.c									\
									src/algorithm/sort_medium.c 								\
									src/algorithm/sort_advanced.c

# Algorithm Advanced
ALGORITHM_ADVANCED				=	src/algorithm_advanced/min_to_top_stack_a.c					\
									src/algorithm_advanced/min_to_top_stack_b.c					\
									src/algorithm_advanced/min_to_top_stacks.c					\
									src/algorithm_advanced/send_b.c								\
									src/algorithm_advanced/sort_stack_b.c						\
									src/algorithm_advanced/third_biggest_element.c

# Algorithm Low
ALGORITHM_LOW					=	src/algorithm_low/is_rotate.c								\
									src/algorithm_low/is_reverse_rotate.c

# Element costs
ELEMENT_COSTS					=	src/element_cost/element_cost_a.c							\
									src/element_cost/element_cost_b.c							\
									src/element_cost/element_cost_pos_first.c					\
									src/element_cost/element_cost_pos_min.c						\
									src/element_cost/element_cost_pos_max.c						\
									src/element_cost/element_lowest_cost.c						\
									src/element_cost/element_set_costs.c

# Element moves
ELEMENT_MOVES					=	src/element_moves/element_swap.c							\
									src/element_moves/element_add.c								\
									src/element_moves/element_remove.c							\
									src/element_moves/element_climb.c							\
									src/element_moves/element_fall.c

# Element position
ELEMENT_POSITION				=	src/element_position/element_pos_max.c						\
									src/element_position/element_pos_min.c

# Error handler
ERROR_HANDLING					=	src/errors/error_args.c										\
									src/errors/error_malloc.c

# Operation				
OPERATIONS						=	src/operations/sa.c 										\
									src/operations/sb.c 										\
									src/operations/ss.c 										\
									src/operations/pa.c 										\
									src/operations/pb.c 										\
									src/operations/ra.c 										\
									src/operations/rb.c 										\
									src/operations/rr.c 										\
									src/operations/rra.c										\
									src/operations/rrb.c 										\
									src/operations/rrr.c

# Stack handler
STACK_HANDLING					=	src/stack_handler/stack_alloc.c								\
									src/stack_handler/stack_fill.c								\
									src/stack_handler/stack_refill.c 							\
									src/stack_handler/stack_sort.c								\
									src/stack_handler/stack_median.c

# Stack verify
STACK_VERIFY					=	src/stack_verify/is_sorted_low_to_high.c					\
									src/stack_verify/is_sorted_high_to_low.c

# Utils
UTILS							=	src/utils/inicialize.c										\
									src/utils/check_input.c										\
									src/utils/program_over.c

# LIBFT
LIBFT							=	libft/ft_atoi.c												\
									libft/ft_strlen.c											\
									libft/ft_strncmp.c

#################################################################################################
# 										EXECUTABLE												#
#################################################################################################

# Name of executable file
EXECUTABLE_NAME 				=	push_swap

# EXECUTABLE FILE
EXECUTABLE_FILE 				=	src/$(EXECUTABLE_NAME).c	

#################################################################################################
# 										RULES													#
#################################################################################################

# Convert C Files to Object Files
.c.o:
					${CC} ${C_FLAGS} $(OBJ_FLAG) $< $(NAME_FLAG) ${<:.c=.o}

# all
all:				$(EXECUTABLE_NAME)  

# Build Project
$(EXECUTABLE_NAME): ${OBJ_FILES}
					$(CREATE_FOLDER) $(LIB_FOLDER)
					${AR} ${LIB_FOLDER}/${LIB_FILE} ${OBJ_FILES}
					${CC} ${C_FLAGS} ${LIB_FOLDER}/${LIB_FILE} $(NAME_FLAG) $(EXECUTABLE_NAME) 

# Norminette
norm:
					$(NORM) $(HEADER_FILES) $(SRC_FILES)

# Clean Project
clean:
					${RM} ${OBJ_FILES}
					${RM} $(EXECUTABLE_NAME)

fclean:				clean
					${RM} ${LIB_FOLDER}/${LIB_FILE}
					${RM} $(LIB_FOLDER)

# Clean and Build Project
re:					fclean all

# Phony (I dont remember what this do, i think is to reserve the name or something like that)
.PHONY:				all norm clean fclean re

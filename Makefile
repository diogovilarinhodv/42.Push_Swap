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
HEADER_FILES				=	src/push_swap.h
OBJ_FILES					=	${SRC_FILES:.c=.o}

# Source files
SRC_FILES					=	src/push_swap.c												\
								$(SRC_ERROR_HANDLING_FILES)									\
								$(SRC_LIBFT_FILES)											\
								$(SRC_UTILS_FILES)											\
								$(SRC_OPERATIONS_FILES)										\
								$(SRC_OPERATIONS_UTILS_FILES)								\
								$(SRC_ALGORITHM_FILES)										\
								$(SRC_ALGORITHM_UTILS_FILES)								\
								$(SRC_STACK_HANDLING_FILES)									\
								printer_tester.c

# Error handler
SRC_ERROR_HANDLING_FILES	=	src/errors/error_args.c										\
								src/errors/error_malloc.c

# Utils files
SRC_UTILS_FILES				=	src/utils/inicialize.c										\
								src/utils/check_input.c										\
								src/utils/program_over.c

# Stack handler files
SRC_STACK_HANDLING_FILES	=	src/stack_handler/stack_alloc.c								\
								src/stack_handler/stack_fill.c								\
								src/stack_handler/stack_refill.c 							\
								src/stack_handler/stack_sort.c 								\
								src/stack_handler/stack_median.c

# Operation files				
SRC_OPERATIONS_FILES		=	src/operations/sa.c 										\
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

# Operation utils files
SRC_OPERATIONS_UTILS_FILES	=	src/element_handler/element_swap.c							\
								src/element_handler/element_add.c							\
								src/element_handler/element_remove.c						\
								src/element_handler/element_climb.c							\
								src/element_handler/element_fall.c

# Algorithm files
SRC_ALGORITHM_FILES			=	src/algorithm/sort.c										\
								src/algorithm/sort_low_a.c									\
								src/algorithm/sort_low_b.c									\
								src/algorithm/sort_medium.c 								\
								src/algorithm/sort_advanced.c

# Algorithm utils files
SRC_ALGORITHM_UTILS_FILES	=	src/algorithm_utils/is_sorted_low_to_high.c					\
								src/algorithm_utils/is_sorted_high_to_low.c					\
								src/algorithm_utils/advanced_operation_reverse_stack_a.c	\
								src/algorithm_utils/advanced_operation_stack_b.c			\
								src/algorithm_utils/advanced_operation_stack_a.c			\
								src/algorithm_utils/cost_element.c							\
								src/algorithm_utils/cost_last_element.c						\
								src/algorithm_utils/cost_set.c	


# LIBFT files
SRC_LIBFT_FILES				=	libft/ft_atoi.c


# Name of executable file
EXECUTABLE_NAME 			=	push_swap

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

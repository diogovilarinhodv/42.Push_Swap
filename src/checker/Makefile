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
LIB_FILE					=	checker.a
HEADER_FILES				=	../../includes/push_swap.h										\
								../../includes/functions.h										\
								../../includes/structs.h										\
								checker.h
OBJ_FILES					=	${SRC_FILES:.c=.o}

#################################################################################################
# 										FILES													#
#################################################################################################

# Source files
SRC_FILES						=	$(ELEMENT_MOVES)											\
									$(OPERATIONS)												\
									$(STACK_HANDLING)											\
									$(UTILS)													\
									$(LIBFT)													\
									$(GET_NEXT_LINE)											\
									$(EXECUTABLE_FILE)

# Element moves
ELEMENT_MOVES					=	../element_moves/element_swap.c								\
									../element_moves/element_add.c								\
									../element_moves/element_remove.c							\
									../element_moves/element_climb.c							\
									../element_moves/element_fall.c

# Operation				
OPERATIONS						=	../operations/sa.c 											\
									../operations/sb.c 											\
									../operations/ss.c 											\
									../operations/pa.c 											\
									../operations/pb.c 											\
									../operations/ra.c 											\
									../operations/rb.c 											\
									../operations/rr.c 											\
									../operations/rra.c											\
									../operations/rrb.c 										\
									../operations/rrr.c

# Stack handler
STACK_HANDLING					=	../stack_handler/stack_alloc.c								\
									../stack_handler/stack_fill.c								\
									../stack_handler/stack_refill.c 							\
									../stack_handler/stack_is_sorted.c

# Utils
UTILS							=	../utils/inicialize.c										\
									../utils/check_input.c										\
									../utils/program_over.c

# LIBFT
LIBFT							=	../../libft/ft_atoi.c										\
									../../libft/ft_strlen.c										\
									../../libft/ft_strncmp.c

# GET_NEXT_LINE
GET_NEXT_LINE					=	get_next_line.c												\
									get_next_line_utils.c

#################################################################################################
# 										EXECUTABLE												#
#################################################################################################

# Name of executable file
EXECUTABLE_NAME 				=	checker

# EXECUTABLE FILE
EXECUTABLE_FILE 				=	$(EXECUTABLE_NAME).c	

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

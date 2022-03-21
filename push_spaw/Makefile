SRCME	=	src/push_swap.c src/comb_str.c src/ft_split.c src/start_stack.c src/ft_atoi.c src/stack_func.c \
          			src/operation/rrb_rra.c src/operation/sa_sb.c src/sourt_3.c \
          			src/operation/pa_pb.c src/sourt_5.c src/sort_big.c src/bubble_sort.c src/edge_stack.c \
          			src/utilities_stack.c src/sort_min_b.c src/operation/rarbrr.c src/sort_start_median.c \
          			src/operation/pa.c src/utilities_stack_1.c src/utilities_stack_2.c \
          			src/max_min_check.c src/utilities_stack_3.c src/main/push_swap_m.c \
          			src/validation.c
#          			src/get_get_next_line.c \
#          			src/get_next_line_utils.c \

CHEKE_F	=	 src/comb_str.c src/ft_split.c src/start_stack.c src/ft_atoi.c src/stack_func.c \
                      			src/operation/rrb_rra.c src/operation/sa_sb.c src/sourt_3.c \
                      			src/operation/pa_pb.c src/sourt_5.c src/sort_big.c src/bubble_sort.c src/edge_stack.c \
                      			src/utilities_stack.c src/sort_min_b.c src/operation/rarbrr.c src/sort_start_median.c \
                      			src/operation/pa.c src/utilities_stack_1.c src/utilities_stack_2.c \
                      			src/max_min_check.c src/utilities_stack_3.c src/validation.c  \
                      			src/get_next_line.c src/get_next_line_utils.c src/cheker/cheker.c src/cheker/cheker_m.c\

#OPER	= rarbrr.c

SRC		= $(SRCME)

COBJ	= $(CHEKE_F:.c=.o)


OBJ		= $(SRC:.c=.o)

RM		= /bin/rm -f

cc 		= gcc

NAME		= push_swap

CNAME		= cheker

CC		= gcc

.c.o:
			@$(CC) -c $< -o $(<:.c=.o)

all:		${NAME}
#			@printf	"\033[2K\r$(_BLUE)$(_BOLD) $(EEE) $(_END)\n"

$(NAME):	${OBJ}
			@gcc -o ${NAME} ${OBJ}

bonus:		${CNAME}

$(CNAME):	${COBJ}
			@gcc -o ${CNAME} ${COBJ}

clean:
			@${RM} ${OBJ}


fclean:		clean
			@${RM} ${NAME}

clean_b:
			@${RM} ${COBJ}


fclean_b:	clean_b
			@${RM} ${CNAME}


re:			fclean all clean

re_b:		fclean_b bonus clean_b

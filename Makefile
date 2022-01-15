CC := cc
FLAGS := -Wall -Werror -Wextra
LINKS := -lmlx -framework OpenGL -framework AppKit

CFILES := mand/so_long.c mand/ft_putstr.c mand/ft_strlen.c mand/get_next_line.c mand/ft_checkmap.c mand/ft_checksize.c \
			mand/ft_search.c mand/ft_fill.c mand/ft_memcpy.c mand/ft_fillmap.c mand/ft_init.c mand/ft_keyhook.c mand/ft_movedown.c \
			mand/ft_moveleft.c mand/ft_moveright.c mand/ft_moveup.c mand/ft_check_collect.c mand/get_next_line_utils.c mand/ft_move.c \
			mand/ft_init2.c mand/ft_clear.c mand/ft_create_win.c mand/ft_ifchecks.c

OFILES := $(CFILES:.c=.o)

BCFILES := bonus/so_long_bonus.c bonus/ft_putstr_bonus.c bonus/ft_strlen_bonus.c bonus/get_next_line_bonus.c bonus/ft_checkmap_bonus.c bonus/ft_checksize_bonus.c \
			bonus/ft_search_bonus.c bonus/ft_fill_bonus.c bonus/ft_memcpy_bonus.c bonus/ft_fillmap_bonus.c bonus/ft_init_bonus.c bonus/ft_keyhook_bonus.c bonus/ft_movedown_bonus.c \
			bonus/ft_moveleft_bonus.c bonus/ft_moveright_bonus.c bonus/ft_moveup_bonus.c bonus/ft_check_collect_bonus.c bonus/get_next_line_utils_bonus.c bonus/ft_move_bonus.c \
			bonus/ft_init2_bonus.c bonus/ft_itoa_bonus.c bonus/ft_clear_bonus.c bonus/ft_create_win_bonus.c bonus/ft_ifchecks_bonus.c

BOFILES := $(BCFILES:.c=.o)

INC := mand/so_long.h

BINC := bonus/so_long_bonus.h

NAME := so_long

$(NAME) : $(OFILES) $(INC)
	@$(CC) $(FLAGS) $(CFILES) $(LINKS) -o $(NAME)

bonus : $(BOFILES) $(BINC)
	@$(CC) $(FLAGS) $(BCFILES) $(LINKS) -o $(NAME)

all : $(NAME)
clean :
	@rm -rf $(OFILES) $(BOFILES)
fclean : clean
	@rm -rf $(NAME)

re : fclean all

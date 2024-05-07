# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:46:56 by fcoullou          #+#    #+#              #
#    Updated: 2024/05/07 13:58:06 by fcoullou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
##	PROG NAME ##################################################################
NAME			= libft.a

################################################################################
##	PATHS ######################################################################
SRC_PATH		= src
OBJ_PATH		= obj
INC_PATH		= include

################################################################################
##	FILES ######################################################################
SRC				= $(SRC_PATH)/bonus/ft_lstadd_back.c \
				$(SRC_PATH)/bonus/ft_lstadd_front.c \
				$(SRC_PATH)/bonus/ft_lstclear.c \
				$(SRC_PATH)/bonus/ft_lstdelone.c \
				$(SRC_PATH)/bonus/ft_lstiter.c \
				$(SRC_PATH)/bonus/ft_lstlast.c \
				$(SRC_PATH)/bonus/ft_lstmap.c \
				$(SRC_PATH)/bonus/ft_lstnew.c \
				$(SRC_PATH)/bonus/ft_lstsize.c \
				$(SRC_PATH)/ft_printf/ft_pf_char_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_dec_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_fill_n_count_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_flags_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_hex_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_len_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_ptr_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_str_b.c \
				$(SRC_PATH)/ft_printf/ft_pf_uint_b.c \
				$(SRC_PATH)/ft_printf/ft_printf_b.c \
				$(SRC_PATH)/gnl/get_next_line_b.c \
				$(SRC_PATH)/primary/ft_atoi.c \
				$(SRC_PATH)/primary/ft_bzero.c \
				$(SRC_PATH)/primary/ft_calloc.c \
				$(SRC_PATH)/primary/ft_isalnum.c \
				$(SRC_PATH)/primary/ft_isalpha.c \
				$(SRC_PATH)/primary/ft_isascii.c \
				$(SRC_PATH)/primary/ft_isdigit.c \
				$(SRC_PATH)/primary/ft_isprint.c \
				$(SRC_PATH)/primary/ft_itoa.c \
				$(SRC_PATH)/primary/ft_memchr.c \
				$(SRC_PATH)/primary/ft_memcmp.c \
				$(SRC_PATH)/primary/ft_memcpy.c \
				$(SRC_PATH)/primary/ft_memmove.c \
				$(SRC_PATH)/primary/ft_memset.c \
				$(SRC_PATH)/primary/ft_putchar_fd.c \
				$(SRC_PATH)/primary/ft_putendl_fd.c \
				$(SRC_PATH)/primary/ft_putnbr_fd.c \
				$(SRC_PATH)/primary/ft_putstr_fd.c \
				$(SRC_PATH)/primary/ft_split.c \
				$(SRC_PATH)/primary/ft_strchr.c \
				$(SRC_PATH)/primary/ft_strdup.c \
				$(SRC_PATH)/primary/ft_striteri.c \
				$(SRC_PATH)/primary/ft_strjoin.c \
				$(SRC_PATH)/primary/ft_strlcat.c \
				$(SRC_PATH)/primary/ft_strlcpy.c \
				$(SRC_PATH)/primary/ft_strlen.c \
				$(SRC_PATH)/primary/ft_strmapi.c \
				$(SRC_PATH)/primary/ft_strncmp.c \
				$(SRC_PATH)/primary/ft_strnstr.c \
				$(SRC_PATH)/primary/ft_strrchr.c \
				$(SRC_PATH)/primary/ft_strtrim.c \
				$(SRC_PATH)/primary/ft_substr.c \
				$(SRC_PATH)/primary/ft_tolower.c \
				$(SRC_PATH)/primary/ft_toupper.c \
				$(SRC_PATH)/secondary/do_op.c \
				$(SRC_PATH)/secondary/expand_str.c \
				$(SRC_PATH)/secondary/first_word.c \
				$(SRC_PATH)/secondary/flood_fill.c \
				$(SRC_PATH)/secondary/fprime.c \
				$(SRC_PATH)/secondary/ft_atoi_base.c \
				$(SRC_PATH)/secondary/ft_rrange.c \
				$(SRC_PATH)/secondary/ft_strcmp.c \
				$(SRC_PATH)/secondary/ft_strcpy.c \
				$(SRC_PATH)/secondary/ft_strcspn.c \
				$(SRC_PATH)/secondary/ft_swap.c \
				$(SRC_PATH)/secondary/hidenp.c \
				$(SRC_PATH)/secondary/is_power_of_2.c \
				$(SRC_PATH)/secondary/max.c \
				$(SRC_PATH)/secondary/pgcd.c \
				$(SRC_PATH)/secondary/print_hex.c \
				$(SRC_PATH)/secondary/rev_print.c \
				$(SRC_PATH)/secondary/rostring.c \
				$(SRC_PATH)/secondary/search_and_replace.c \
				$(SRC_PATH)/secondary/sort_list.c \
				$(SRC_PATH)/secondary/tab_mult.c \
#------------------------------------------------------------------------------#
INC				= $(INC_PATH)/ft_printf.h \
				$(INC_PATH)/libft.h \
#------------------------------------------------------------------------------#
OBJ				= $(SRC:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)
#------------------------------------------------------------------------------#
OUTPUT_LEAKS 	= valgrind-out.txt

################################################################################
##	COMPILER ###################################################################
CFLAGS			= -Wall -Werror -Wextra -I./include -I./libft/include -g3
LFLAGS 			= -L./libft -lft
#------------------------------------------------------------------------------#
AR				= ar
CC				= cc
RM				= rm -f
CD				= cd
DIR_DUP			= mkdir -p $(@D)

################################################################################
##	+++++ ######################################################################
GREEN=\033[0;32m
RED=\033[0;31m
RESET=\033[0m
CLEAR_EOL=\033[K

################################################################################
##	RULES ######################################################################
all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@$(AR) rcs $(NAME) $(OBJ)
	@printf "$(GREEN)[CREATED]$(RESET) : $(NAME)\n"
#------------------------------------------------------------------------------#
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@$(DIR_DUP)
	@printf "$(GREEN)[COMPILATION]$(RESET) : $<$(CLEAR_EOL)\r"
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf "$(CLEAR_EOL)"
#------------------------------------------------------------------------------#
clean:
	@printf " "
	@for file in $(OBJ); do \
		printf "$(RED)[DELETE FILES]$(RESET) : $(CLEAR_EOL)$$file "; \
		sleep 0.02; \
		printf "\r"; \
	done && \
	printf "$(CLEAR_EOL)$(RED)[ALL FILES DELETED]$(RESET)\n" && \
	$(RM) $(OBJ) && \
	$(RM) -r $(OBJ_PATH)
#------------------------------------------------------------------------------#
fclean: clean
	@$(RM) $(NAME)
	@$(RM) -r $(OBJ_PATH)
#------------------------------------------------------------------------------#
re: fclean all
#------------------------------------------------------------------------------#
.PHONY: all bonus clean fclean re  
#------------------------------------------------------------------------------#

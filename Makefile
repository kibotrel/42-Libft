# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:35:03 by kibotrel          #+#    #+#              #
#    Updated: 2018/11/21 14:46:08 by kibotrel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

BINDIR		= bin/

SRCDIR		= srcs/

SRC			= ft_putchar.c				ft_putchar_fd.c			\
		  	  ft_putstr.c				ft_putstr_fd.c			\
			  ft_putnbr.c				ft_putnbr_fd.c			\
			  ft_putendl.c				ft_putendl_fd.c			\
			  													\
			  ft_memset.c				ft_memdel.c				\
			  ft_memcmp.c				ft_memchr.c				\
			  ft_memcpy.c				ft_memccpy.c			\
			  ft_memmove.c										\
			  													\
			  ft_atoi.c					ft_itoa.c				\
			  ft_strdup.c				ft_strlen.c				\
			  ft_strnew.c				ft_strdel.c				\
			  ft_strclr.c				ft_strsplit.c			\
			  ft_bzero.c				ft_strtrim.c			\
			  ft_strlcat.c				ft_strlcpy.c			\
			  ft_memalloc.c				ft_create_elem.c		\
			  													\
			  ft_strstr.c				ft_strnstr.c			\
			  ft_strcmp.c				ft_strncmp.c			\
			  ft_strcpy.c				ft_strncpy.c			\
			  ft_strequ.c				ft_strnequ.c			\
			  ft_strcat.c				ft_strncat.c			\
			  ft_striter.c				ft_striteri.c			\
			  ft_strmap.c				ft_strmapi.c			\
			  ft_strchr.c				ft_strrchr.c			\
			  ft_strjoin.c				ft_strsub.c				\
			  ft_strrev.c				ft_strcapitalize.c		\
			  													\
			  ft_str_is_uppercase.c		ft_str_is_lowercase.c	\
			  ft_toupper.c				ft_tolower.c			\
			  ft_isalpha.c				ft_isdigit.c			\
			  ft_isalnum.c				ft_isascii.c			\
			  ft_isprint.c				ft_count_if.c			\
			  ft_is_sort.c				ft_foreach.c			\
			  													\
			  ft_lstnew.c				ft_lstadd.c				\
			  ft_lstdel.c				ft_lstdelone.c			\
			  ft_lstmap.c				ft_lstiter.c			\
			  ft_list_at.c				ft_list_size.c			\
			  ft_list_foreach.c			ft_list_foreach_if.c	\
			  ft_list_push_back.c		ft_list_push_front.c	\
			  ft_list_last.c			ft_list_remove_if.c		\
			  ft_list_reverse.c									\
			  													\
			  ft_match.c				ft_nmatch.c				\
			  ft_power.c				ft_fibonacci.c			\
			  ft_is_prime.c				ft_find_next_prime.c	\
			  ft_is_negative.c									\
			  													\
			  ft_btree_create_node.c	ft_btree_search_item.c	\
			  ft_btree_apply_infix.c	ft_btree_apply_suffix.c	\
			  ft_btree_apply_prefix.c

OBJDIR		= objs/

OBJ			= $(SRC:.c=.o)

CSRC		= $(addprefix $(SRCDIR), $(SRC))

COBJ		= $(addprefix $(OBJDIR), $(OBJ))

INC			= ./includes/

CFLAGS		= -I$(INC) -Wall -Wextra -Werror

CC			= gcc

$(NAME): $(COBJ)
	@echo "\033[33m\n      - Building \033[0m$(NAME) \033[33m...\n\033[0m"
	@ar rc $(NAME) $(COBJ)
	@echo "\033[33m      - Indexing \033[0m$(NAME) \033[33m...\n\033[0m"
	@ranlib $(NAME)
	@echo "\033[32m***   Project $(NAME) successfully compiled   ***\n\033[0m"

all: $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c	
	@echo "\033[33m      - Compiling :\033[0m" $<
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@clear
	@echo "\033[32m***   Deleting all object files ...   ***\n\033[0m"
	@rm -rf $(COBJ)

fclean: clean
	@echo "\033[32m***   Deleting executable file ...    ***\n\033[0m"
	@rm -rf $(CBIN)

re: fclean all

.PHONY: all clean fclean re


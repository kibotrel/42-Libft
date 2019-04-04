# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:35:03 by kibotrel          #+#    #+#              #
#    Updated: 2019/04/04 15:21:06 by kibotrel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable's name (Can be changed)

NAME		= libft.a

# All the directories needed to know where files should be (Can be changed)

OBJDIR		= objs/
SRCDIR		= srcs/
INCDIR		= ./includes/

# Source files (Can be changed)

SRC			= ft_putchar.c				ft_putchar_fd.c			\
		  	  ft_putstr.c				ft_putstr_fd.c			\
			  ft_putnbr.c				ft_putnbr_fd.c			\
			  ft_putendl.c				ft_putendl_fd.c			\
			  ft_print_error.c									\
																\
			  ft_isalpha.c				ft_isdigit.c			\
			  ft_isalnum.c				ft_isascii.c			\
			  ft_isprint.c				ft_isspace.c			\
			  ft_str_is_uppercase.c		ft_str_is_lowercase.c	\
			  ft_memcmp.c				ft_strnequ.c			\
			  ft_strcmp.c				ft_strncmp.c			\
			  ft_strequ.c										\
																\
			  ft_word_count.c			ft_word_length.c		\
			  ft_strrev.c				ft_numlen.c				\
			  ft_strupcase.c			ft_strlowcase.c			\
			  ft_strdup.c				ft_strlen.c				\
			  ft_strtrim.c				ft_strchr.c				\
			  ft_strsplit.c				ft_strjoin.c			\
			  ft_strncpy.c				ft_strncat.c			\
			  ft_strnstr.c				ft_char_count.c			\
			  ft_char_rcount.c			ft_strcat.c				\
			  ft_strcpy.c				ft_strstr.c				\
																\
			  ft_toupper.c				ft_tolower.c			\
			  ft_atoi.c					ft_itoa.c				\
			  ft_itoa_base.c									\
																\
			  ft_memalloc.c				ft_bzero.c				\
			  ft_memchr.c				ft_memcpy.c				\
			  ft_memccpy.c				ft_memmove.c			\
			  ft_memset.c				ft_strnew.c				\
																\
			  ft_get_next_line.c

# Some tricks in order to get the makefile doing his job the way I want (Can't be changed)

CSRC		= $(addprefix $(SRCDIR), $(SRC))
COBJ		= $(addprefix $(OBJDIR), $(OBJ))
CHECKDIR	= $(shell if [ ! -d "$(OBJDIR)" ]; then	mkdir $(OBJDIR); fi)

# How files should be compiled with set flags (Can be changed)

OBJ			= $(SRC:.c=.o)
CFLAGS		= -I$(INCDIR) -Wall -Wextra -Werror
CC			= gcc

# Build the library when all .c files are compiled into .o files and then indexing it

$(NAME): $(CHECKDIR) $(COBJ)
	@echo "\033[33m\n      - Building \033[0m$(NAME) \033[33m...\n\033[0m"
	@ar rc $(NAME) $(COBJ)
	@echo "\033[33m      - Indexing \033[0m$(NAME) \033[33m...\n\033[0m"
	@ranlib $(NAME)
	@echo "\033[32m***   Project $(NAME) successfully compiled   ***\n\033[0m"

all: $(NAME)

# Redefinition of implicit compilation rule to prompt some colors and file names during the said compilation

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "\033[33m      - Compiling :\033[0m" $<
	@$(CC) $(CFLAGS) -c $< -o $@

# Deleting all .o files and then the directory where they were located

clean:
	@echo "\n\033[32m***   Deleting all object files   ...   ***\n\033[0m"
	@rm -rf $(COBJ)

# Deleting the library after cleaning up all .o files

fclean: clean
	@echo "\033[32m***   Deleting executable file    ...   ***\n\033[0m"
	@rm -rf $(NAME)

# Delete all .o files then the library and rebuild the whole thing again

re: fclean all

.PHONY: all clean fclean re

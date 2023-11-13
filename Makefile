# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 22:34:11 by jade-car          #+#    #+#              #
#    Updated: 2023/11/06 14:28:23 by jade-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================= COLORS ======================================
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PURPLE = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m
RESET = \033[0m

#================================= EXECUTABLE NAME FILE ========================
NAME = libft.a

#================================= COMPILER ====================================
CC = cc

#================================= CFLAGS ======================================
CFLAGS = -Werror -Wextra -Wall

#================================= SOURCE ======================================
## LOOK UP FOR FILES.c
SRC = ft_isalnum.c ft_isprint.c ft_memcpy.c \
	ft_putendl_fd.c ft_strchr.c ft_strlcat.c \
	ft_strncmp.c ft_substr.c ft_atoi.c \
	ft_isalpha.c ft_itoa.c ft_memmove.c \
	ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c \
	ft_strnstr.c ft_tolower.c ft_bzero.c \
	ft_isascii.c ft_memchr.c ft_memset.c \
	ft_putstr_fd.c ft_striteri.c ft_strlen.c \
	ft_strrchr.c ft_toupper.c ft_calloc.c \
	ft_isdigit.c ft_memcmp.c ft_putchar_fd.c \
	ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c

#================================= BONUS =======================================
SRC_BONUS = ft_lstsize_bonus.c ft_lstnew_bonus.c \
		ft_lstdelone_bonus.c ft_lstadd_front_bonus.c \
		ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

#================================= OBJECTS =====================================
## FILES.c/.h TO FILES.o
OBJS = $(SRC:.c=.o)

#================================= OBJECTS_BONUS ===============================
OBJS_BONUS = $(SRC_BONUS:.c=.o)

#================================= LIBRARY =====================================
HEADER = libft.h

#================================= ARCHIVES.h ==================================
## 'AR' COMMAND TO CREATE LIBRARIES
AR = ar -rcs

#================================= REMOVE ======================================
## DELETE FILES
REMOVE = rm -f

#================================= RULES =======================================
all: $(NAME)

## COMPILE FILES.c IN A EXECUTABLE NAMED 'libft.a'
$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@printf "$(GREEN)LIBFT: $(PURPLE)🎉Congrats it works🥳!$(RESET)"

bonus: $(OBJS) $(OBJS_BONUS)
		@ar rcs $(NAME) $(OBJS_BONUS)
		@printf "$(GREEN)LIBFT: $(YELLOW)🎉Bonus compiles🥳!$(RESET)"

%.o: %.c $(HEADER) 
	cc $(CFLAGS) -I $(HEADER) -c $< -o $@

## DELETE ALL TARGET FILES.o
clean:
	$(REMOVE) ${OBJS} $(OBJS_BONUS)

## REMOVE ALL .o && EXECUTABLE 
fclean: clean
	$(REMOVE) $(NAME)

## REBUILD ALL FILES. DELETE THE TARGET FILES AND COMPILE AGAIN
re: fclean all

## DEBUGGER OPTIONS
debug: $(NAME)
	$(CC) -g $(NAME)

## SILENT STEP RULES
#.SILENT: clean fclean re

## AVOID RUNNING FILES WITH THE SAME NAME AS THE FLAGS
.PHONY: all clean fclean re debug

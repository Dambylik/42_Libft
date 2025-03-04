# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 15:58:05 by okapshai          #+#    #+#              #
#    Updated: 2024/06/03 17:29:34 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
LIBFT = libft.h
CC := cc
CFLAGS := -Wall -Werror -Wextra -c
SRC_FILES := ft_isalpha.c \
                        ft_isdigit.c \
                        ft_isalnum.c \
                        ft_isascii.c \
                        ft_isprint.c \
                        ft_strlen.c \
                        ft_memset.c \
                        ft_bzero.c \
                        ft_memcpy.c \
                        ft_memmove.c \
                        ft_strlcpy.c \
                        ft_strlcat.c \
                        ft_toupper.c \
                        ft_tolower.c \
                        ft_strchr.c \
                        ft_strrchr.c \
                        ft_strncmp.c \
                        ft_memchr.c \
                        ft_memcmp.c \
                        ft_strnstr.c \
                        ft_atoi.c \
                        ft_calloc.c \
                        ft_strdup.c \
                        ft_substr.c \
                        ft_strjoin.c \
                        ft_strtrim.c \
                        ft_split.c \
                        ft_itoa.c \
                        ft_strmapi.c \
                        ft_striteri.c \
                        ft_putchar_fd.c \
                        ft_putstr_fd.c \
                        ft_putendl_fd.c \
                        ft_putnbr_fd.c \

SRCS_BONUS := ft_lstnew_bonus.c \
                        ft_lstadd_front_bonus.c \
                        ft_lstsize_bonus.c \
                        ft_lstlast_bonus.c \
                        ft_lstadd_back_bonus.c \
                        ft_lstdelone_bonus.c \
                        ft_lstclear_bonus.c \
                        ft_lstiter_bonus.c \
                        ft_lstmap_bonus.c \
                        

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
LIBC := ar rcs
RM := rm -f

all: $(NAME)

$(NAME): ${OBJ_FILES}
			$(LIBC) ${NAME} ${OBJ_FILES}

bonus: ${OBJ_FILES} ${OBJS_BONUS}
			$(LIBC) ${NAME} ${OBJS_BONUS}

%.o: %.c ${LIBFT}
	        $(CC) $(CFLAGS) $< -o $@

clean:
	        $(RM) $(OBJ_FILES) $(OBJS_BONUS)

fclean: clean
	        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
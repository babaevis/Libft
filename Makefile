# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/15 17:58:13 by kdeloise          #+#    #+#              #
#    Updated: 2020/11/02 17:31:09 by kroyce           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


	
NAME = libft.a

FLAGS = gcc -Wall -Werror -Wextra

HEADER = libft.h

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
    ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c \
    ft_strlcat.c ft_strchr.c ft_strlcpy.c \
    ft_strrchr.c ft_strnstr.c ft_strncmp.c\
    ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
    ft_isprint.c ft_toupper.c ft_tolower.c \
    ft_strmapi.c ft_substr.c ft_split.c ft_calloc.c\
    ft_strjoin.c ft_strtrim.c ft_itoa.c\
    ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OSRC = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	$(FLAGS) -c $< -o $@

all: $(NAME) $(OBJ)

$(NAME): $(OSRC)
	ar rc $(NAME) $(OSRC)
	ranlib $(NAME)

clean:
	rm -rf $(OSRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all

goose:
	@echo ""
	@echo "  ░ГУСЬ░▄▀▀▀▄░РАБОТЯГАМ░░"
	@echo "   ▄███▀░◐░░░▌░░░░░░░"
	@echo "    ░░░░▌░░░░░▐░░░░░░░"
	@echo '    ░░░░▐░░░░░▐░░░░░░░'
	@echo "    ░░░░▌░░░░░▐▄▄░░░░░"
	@echo '    ░░░░▌░░░░▄▀▒▒▀▀▀▀▄'
	@echo "     ░░░▐░░░░▐▒▒▒▒▒▒▒▒▀▀▄"
	@echo "      ░░░▐░░░░▐▄▒▒▒▒▒▒▒▒▒▒▀▄"
	@echo "      ░░░░▀▄░░░░▀▄▒▒▒▒▒▒▒▒▒▒▀▄"
	@echo "     ░░░░░░▀▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▀▄"
	@echo "      ░░░░░░░░░░░▌▌▌▌░░░░░"
	@echo "      ░░░░░░░░░░░▌▌░▌▌░░░░░"
	@echo "      ░░░░░░░░░▄▄▌▌▄▌▌░░░░░"







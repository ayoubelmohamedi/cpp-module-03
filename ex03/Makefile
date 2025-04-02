# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 22:34:14 by ael-moha          #+#    #+#              #
#    Updated: 2025/04/02 08:16:39 by macbookpro       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_DIR = srcs
INC_DIR = Includes
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -pedantic
INCLUDES = -I$(INC_DIR)

NAME = DiamondTrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean $(NAME)

.PHONY: all clean fclean re
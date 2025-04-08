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
OBJS = ${SRCS:.cpp=.o}
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I$(INC_DIR)

NAME = DiamondTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

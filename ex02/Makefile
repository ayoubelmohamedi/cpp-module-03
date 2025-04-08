# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 22:34:14 by ael-moha          #+#    #+#              #
#    Updated: 2025/03/21 00:56:26 by ael-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_DIR = srcs
INC_DIR = Includes
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = ${SRCS:.cpp=.o}
CXX = c++
RM = rm -f
INCLUDES = -I$(INC_DIR)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 $(INCLUDES)


NAME = FlagTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

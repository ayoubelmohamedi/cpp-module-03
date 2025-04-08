# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 08:24:42 by macbookpro        #+#    #+#              #
#    Updated: 2025/04/02 08:24:45 by macbookpro       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp ClapTrap.cpp
OBJS = ${SRCS:.cpp=.o}
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
NAME = claptrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

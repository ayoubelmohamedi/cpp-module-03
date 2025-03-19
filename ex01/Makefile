

SRC_DIR = srcs
INC_DIR = Includes
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDES = -I$(INC_DIR)

NAME = claptrap

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean $(NAME)

.PHONY: all clean fclean re
SRCS_FILE = main.cpp \
			ClapTrap.cpp

SRCS = $(addprefix ./,$(SRCS_FILE))

OBJ = $(SRCS:.cpp=.o)

NAME = claptrap

all: $(NAME)

$(NAME): $(OBJ)
		@c++ $(OBJ) -o $@

%.o: %.c
		@c++ -Wall -Wextra -Werror -c $< -o $@

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re

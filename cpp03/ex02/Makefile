SRCS_FILE = main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp

SRCS = $(addprefix ./,$(SRCS_FILE))

OBJ = $(SRCS:.cpp=.o)

NAME = fragtrap

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

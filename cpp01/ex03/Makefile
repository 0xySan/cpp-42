SRCS_FILE = main.cpp \
			Weapon.cpp \
			HumanB.cpp \
			HumanA.cpp

SRCS = $(addprefix ./,$(SRCS_FILE))

OBJ = $(SRCS:.cpp=.o)

NAME = Unnecessary_violence

all: $(NAME)

$(NAME): $(OBJ)
		@c++ -g -Wall -Wextra -Werror $(OBJ) -o $@

%.o: %.c
		@c++ -g -Wall -Wextra -Werror -c $< -o $@

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re

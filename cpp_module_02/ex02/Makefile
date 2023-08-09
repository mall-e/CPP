NAME = rawbits02
CC = c++
CLAFGS = -Wall -Wextra -Werror -std=c++98
SRCS = *.cpp
OBJ = $(SRCS:.cpp = .o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;92mCompiled succesfully..\033[0m"

clean:
	rm -rf  $(NAME)

fclean: clean

re: fclean all

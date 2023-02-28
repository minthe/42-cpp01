NAME = sed

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS_PATH = $(PWD)

SRCS_FILES =	$(shell ls ./ | grep .cpp$)

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_FILES))

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "executable created: \033[32;1m./$(NAME)\033[0m"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "\033[34mclean success\033[0m"

fclean:
	$(RM) $(OBJS) $(NAME)
	@echo "\033[34mfclean success\033[0m"

re: fclean all

.PHONY: all clean fclean re

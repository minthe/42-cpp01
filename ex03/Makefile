NAME = unnecessary_violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

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
	@echo "program\033[32;1m ./$(NAME) \033[0mcompiled"

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[32mdirectory cleaned\033[0m"

re: fclean all

.PHONY: all clean fclean re

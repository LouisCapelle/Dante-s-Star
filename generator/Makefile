NAME	= generator

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c \
		  ./src/error.c \
		  ./src/run.c  \
		  ./src/map.c \
		  ./src/generator.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

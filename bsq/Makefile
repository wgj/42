SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
NAME = bsq
OBJECTS = $(wildcard *.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc $(SOURCES) -o $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf *.o

re: fclean all

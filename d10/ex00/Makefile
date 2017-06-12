SOURCES = $(wildcard srcs/*.c)
HEADERS = $(wildcard includes/*.h)
NAME = libft.a
OBJECTS = $(wildcard *.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): archive
	gcc $(SOURCES) 

archive: assembler
	ar cr $(NAME) $(OBJECTS)

assembler:
	gcc -c $(SOURCES) $(HEADERS)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf *.o

re: fclean all

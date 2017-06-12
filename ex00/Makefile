SOURCES = $(wildcard *.c)
HEADERS = $(wildcard includes/*.h)
NAME = ft_display_file
OBJECTS = $(wildcard *.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc $(SOURCES) -o $(NAME)

archive: assembler
	ar cr $(NAME) $(OBJECTS)

assembler:
	gcc -c $(SOURCES) $(HEADERS)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf *.o

re: fclean all

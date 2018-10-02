C = gcc
FLAGS = -Wall -Wextra -Werror
NAME = amedvedi.filler
DIR = libft/libft.a

OBJECT = 	main.o \
			map_item.o \
			trim.o \
			algo.o \
			min.o \
			size.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECT)
		@make -C libft/
		@echo "Library Compilation Done"
		$(C) $(FLAGS) -o $(NAME) $(OBJECT) $(DIR)
		@echo "Filler Compilation Done"

clean:
	@make clean -C libft/
	rm -rf $(OBJECT)
	@echo "Library Clean Done"
	@echo "Filler Clean Done"

fclean: clean
	@make fclean -C libft/
	@rm -rf $(NAME) a.out
	@echo "Filler Fclean Done"

re: fclean all

%.o: ./%.c
	$(C) $(FLAGS) -o $@ -c $< -I ./

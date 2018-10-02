# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 13:18:22 by amedvedi          #+#    #+#              #
#    Updated: 2018/06/08 13:18:24 by amedvedi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-Wall -Wextra -Werror
OBJECTS = 	ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncpy.o ft_strcat.o \
			ft_strncat.o ft_strchr.o ft_strrchr.o ft_strcmp.o ft_strstr.o \
			ft_strnstr.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o \
			ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
			ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
			ft_memchr.o ft_memcmp.o ft_strlcat.o ft_putchar.o ft_putstr.o \
			ft_putnbr.o ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o \
			ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o ft_strnew.o ft_strsub.o \
			ft_strsplit.o ft_strtrim.o ft_strclr.o ft_strmap.o ft_strdel.o \
			ft_memdel.o ft_strmapi.o ft_striter.o ft_striteri.o ft_strequ.o \
			ft_strnequ.o ft_memalloc.o ft_strjoin.o ft_lstnew.o ft_lstdelone.o \
			ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_strrev.o \
			ft_puttabstr.o ft_memtaballoc.o ft_lstcount.o ft_lstaddend.o \
			ft_lstaddmid.o ft_putnstr.o ft_putwchar.o ft_countnbr.o ft_putnbrwp.o \
			ft_putstrwp.o ft_itoabase.o ft_itoabase_r.o ft_countunbr.o \
			ft_putunbrwp.o ft_putunbr.o ft_putzerox.o ft_isupper.o \
			ft_islower.o ft_isspace.o ft_blank.o get_next_line.o

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
$(OBJECTS) : %.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

.PHONY : clean fclean
clean :
	-rm $(OBJECTS)
fclean : clean
	-rm $(NAME)
re: fclean all

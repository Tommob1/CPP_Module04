# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 13:16:59 by btomlins          #+#    #+#              #
#    Updated: 2024/11/11 15:51:32 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INFILES = main.cpp\
		  Cat.cpp\
		  Animal.cpp\
		  Dog.cpp\
		  WrongAnimal.cpp\
		  WrongCat.cpp\
		  Brain.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = I_dont_want_to_set_the_world_on_fire

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
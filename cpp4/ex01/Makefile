# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/27 12:45:19 by pnovato-          #+#    #+#              #
#    Updated: 2026/06/27 18:14:36 by pnovato-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Animal

CXX= c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Brain.cpp Animal.cpp Dog.cpp Cat.cpp WronAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%o : %.cpp
	$(CXX) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/27 12:41:10 by pnovato-          #+#    #+#              #
#    Updated: 2026/06/27 12:41:45 by pnovato-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie

CXX= c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

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

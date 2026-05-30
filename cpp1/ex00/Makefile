NAME= Zombie

CXX= c++

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

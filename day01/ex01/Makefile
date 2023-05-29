SRCS = Zombie.cpp main.cpp ZombieHorde.cpp

NAME = zombie

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)
	
$(OBJS) : %.o : %.cpp
	c++ -g3 $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
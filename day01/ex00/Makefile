# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 16:03:57 by mparisse          #+#    #+#              #
#    Updated: 2023/05/13 12:40:24 by mparisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Zombie.cpp main.cpp

NAME = zombie

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)
	
$(OBJS) : %.o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
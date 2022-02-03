# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:33:12 by hlimouni          #+#    #+#              #
#    Updated: 2022/02/02 02:30:20 by hlimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=diamondTrap

HDR=./ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp\

SRC=./ClapTrap.cpp \
./FragTrap.cpp \
./ScavTrap.cpp \
./DiamondTrap.cpp \
./main.cpp \

OBJ=$(SRC:.cpp=.o)

.PHONY:clean fclean re all

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

$(OBJ) : %.o : %.cpp $(HDR)
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

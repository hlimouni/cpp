# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:33:12 by hlimouni          #+#    #+#              #
#    Updated: 2022/03/07 15:49:16 by hlimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++
CFLAGS=-Wall -Wextra -Werror
# CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=ex01

HDRS=./binaryOperations.hpp \

SRC=\
./main.cpp \

OBJ=$(SRC:.cpp=.o)

.PHONY:clean fclean re all

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

$(OBJ) : %.o : %.cpp $(HDRS)
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

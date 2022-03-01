# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:33:12 by hlimouni          #+#    #+#              #
#    Updated: 2022/03/01 22:46:35 by hlimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++
CFLAGS=-Wall -Wextra -Werror
NAME=ex03

HDR=Amateria.hpp Character.hpp Cure.hpp Ice.hpp \
ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp\

SRC=./main.cpp \
./AMateria.cpp \
./Character.cpp \
./Cure.cpp \
./Ice.cpp \
./MateriaSource.cpp

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

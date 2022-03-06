# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:33:12 by hlimouni          #+#    #+#              #
#    Updated: 2022/03/06 15:44:54 by hlimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=clang++
CFLAGS=-Wall -Wextra -Werror
# CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=ex02

HDRS=Base.h A.h C.h B.h

SRC=A.cpp\
B.cpp\
C.cpp\
Base.cpp\
main.cpp \

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

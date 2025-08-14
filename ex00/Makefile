# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 22:01:01 by hoskim            #+#    #+#              #
#    Updated: 2025/08/09 18:06:45 by hoskim           ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := megaphone.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# Makefile 작성법 \
1. NAME, CXX, CXXFLAGS 작성 \
2. SRCS, OBJS (SRC:.cpp=.o) 작성 \
3. all, $(NAME), %.o 작성 \
4. clean, fclean, re, .PHONY

# $^ $< $@ 의 의미 \
$^ 모든 의존성 \
$< 첫번째 의존성 \
$@ 타겟 파일 이름

# =와 :=의 차이 \
= 우변을 당장 계산하지 않고 변수를 사용할 때마다 다시 확장한다. (최신 값 매번 반영) \
:= 우변을 정의 시점에서 한번만 확장한다.
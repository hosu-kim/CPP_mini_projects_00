CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook # 실행 파일 이름

# 소스 파일과 헤더 파일 목록
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Contact.hpp PhoneBook.hpp

# 최종 목표
all: $(NAME)

# 실행 파일을 만드는 규칙
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# 소스 파일을 오브젝트 파일로 컴파일하는 규칙
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 정리 규칙
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# 재컴파일 규칙
re: fclean all

.PHONY: all clean fclean re

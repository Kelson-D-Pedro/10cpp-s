NAME	=	phonebook
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Contact.cpp PhoneBook.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %cpp
		@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
		@rm -f $(OBJS)
		clear
	
fclean: clean
		@rm -f $(NAME)
		clear

re: fclean all

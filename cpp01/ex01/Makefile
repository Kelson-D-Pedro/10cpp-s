NAME	= zombie_v2
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all
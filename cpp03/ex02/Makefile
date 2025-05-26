NAME	=	ScavTrap
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC	=	ClapTrap.cpp ScavTrap.cpp main.cpp
OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		@c++ ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
		@c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
		@rm -f ${OBJS}
		clear

fclean: clean
		@rm -f ${NAME}
		clear

re: fclean all

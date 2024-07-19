# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 15:09:20 by jofilipe          #+#    #+#              #
#    Updated: 2024/07/18 15:09:21 by jofilipe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET   = \033[0m
BLACK   = \033[1;30m
RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
PURPLE  = \033[1;35m
CYAN    = \033[1;36m
WHITE   = \033[1;37m

NAME = Harl20

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = main.cpp \
		Harl.cpp \

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
		clear
		echo "   _____ _____  _____   ___  __   ________   _____  _____ ";
		echo "  / ____|  __ \|  __ \ / _ \/_ | |  ____\ \ / / _ \| ____|";
		echo " | |    | |__) | |__) | | | || | | |__   \ V / | | | |__  ";
		echo " | |    |  ___/|  ___/| | | || | |  __|   > <| | | |___ \ ";
		echo " | |____| |    | |    | |_| || | | |____ / . \ |_| |___) |";
		echo "  \_____|_|    |_|     \___/ |_| |______/_/ \_\___/|____/ ";
		echo "                                                          ";
		echo "                                                          ";

clean:
	@$(RM) $(OBJS) $(NAME)

fclean: clean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.SILENT:

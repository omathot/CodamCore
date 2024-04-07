# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 01:41:47 by oscarmathot       #+#    #+#              #
#    Updated: 2024/04/06 23:28:51 by oscarmathot      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------
#VARIABLES

NAME 	:= Interface
SRC 	:= main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp MateriaSource.cpp
# SUBDIR	:= srcs/
# SRCS	:= $(addprefix $(SUBDIR),$(SRC))
OBJ 	:= $(SRC:.cpp=.o)
CMP		:= c++
FLAGS 	:= -Werror -Wall -Wextra -g -fsanitize=address #-std=c++98

#---------------------------------
#FORMATTING AND FUN

clear_line = \033[K
move_up = \033[A
define prettycomp
	@printf "$(1)$(clear_line)\n"
	@$(1)
	@printf "$(move_up)"
endef

RED		:= \033[31m
GREEN 	:= \033[32m
YELLOW	:= \033[33m
BLUE	:= \033[38;5;87m
MAGENTA := \033[35m
CYAN	:= \033[36m
RESET	:= \033[0m

#---------------------------------
#RULES

all	: $(NAME) Ice.h Cure.h AMateria.h IMateriaSource.h ICharacter.h Character.h MateriaSource.h
		@echo "\\n"
		@echo "$(GREEN)Project built successfully !$(RESET)"

$(NAME) : $(OBJ)
		@echo "$(CYAN)Creating the executable...$(RESET)"
		@$(CMP)  $(OBJ) -o $(NAME) $(FLAGS)

%.o : %.c Ice.h Cure.h AMateria.h IMateriaSource.h ICharacter.h Character.h MateriaSource.h
		@echo "$(CYAN)Compiling...$(RESET) $<"
		$(call prettycomp, $(CMP) -c $(FLAGS) -o $@ $<)

clean :
		@rm -f $(OBJ)
		@echo "$(GREEN)Cleaned up the artifacts !$(RESET)"

fclean :
		@rm -f $(NAME) $(OBJ)
		@echo "$(MAGENTA)Cleaned up executable !$(RESET)"

re : fclean all

.PHONY : clean fclean re%%

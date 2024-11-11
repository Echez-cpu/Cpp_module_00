# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 13:26:35 by pokpalae          #+#    #+#              #
#    Updated: 2024/11/11 17:59:59 by pokpalae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp PhoneBook.cpp Contact.cpp
NAME = Pb
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) ContactPhoneBook.hpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all


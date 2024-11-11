/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:24:37 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/11 18:01:01 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ContactPhoneBook.hpp"


int	main(void)
{
	PhoneBook	PhoneBook;

	str			line;
	str			add = "ADD";
	str			search = "SEARCH";
	str			exit = "EXIT";
	
	system("clear");
	std::cout << "Hello! Welcome to the 80's: Echezona awesome phonebook." << std::endl;
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, line);
		if (!line.compare(add))
			PhoneBook.add_contact();
		else if (!line.compare(search))
			PhoneBook.search_contact();
		else if (!line.compare(exit))
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		else 
		{
            std::cout << "Invalid command. Please try again.\n \n \n \n";
        }
	}
	
	return 0;
}


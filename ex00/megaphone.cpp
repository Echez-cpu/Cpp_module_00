/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:02:56 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/18 14:18:50 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>
#include <string>  




int main(int argc, char **argv) 
{
	std::string::size_type j;

	int i;

    if (argc == 1) 
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
    } 
	
	else 
	{
        i = 1;
        while (i < argc)
		{ 
            std::string arg = argv[i];
            j = 0;
            while (j < arg.size())
			{  
                arg[j] = std::toupper(static_cast<unsigned char>(arg[j]));
                j++;
            }
            std::cout << arg;
			std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}

























/*int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	
	if (argc > 1)
	{
		while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			std::cout << (char) std::toupper(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	}
	
	else 
	{
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  '\n';
		
		return(0);
	}
	
	 std::cout << std::endl;
	
	return 0;
}*/
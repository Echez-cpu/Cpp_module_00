/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:02:56 by pokpalae          #+#    #+#             */
/*   Updated: 2024/11/07 15:31:24 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
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
}
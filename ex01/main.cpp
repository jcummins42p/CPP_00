/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/26 18:46:30 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	while(1)
	{
		std::string	command;
		std::cout << "Enter a command: ";
		std::cin >> command;

		if (!command.compare("EXIT"))
			break;
		else if (!command.compare("ADD"))
			phonebook.add();
		else if (!command.compare("SEARCH"))
			phonebook.search();
	}
	return (0);
}

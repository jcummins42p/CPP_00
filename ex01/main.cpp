/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/29 15:44:46 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	while (std::cout << "Enter a command (EXIT (1) / ADD (2) / SEARCH (3)): "
			&& std::cin >> command)
	{
		if (command == "EXIT" || command == "1")
			break;
		else if (command == "ADD" || command == "2")
			phonebook.add();
		else if (command == "SEARCH" || command == "3")
			phonebook.search();
	}
	return (0);
}

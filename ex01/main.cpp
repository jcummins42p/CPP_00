/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/28 15:39:42 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	while (std::cout << "Enter a command: " && std::cin >> command)
	{
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 15:03:45 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	while (std::cout << "Enter a command: " && std::cin >> command)
	{
		if (!command.compare("EXIT"))
			break;
		else if (!command.compare("ADD"))
			phonebook.add();
		else if (!command.compare("SEARCH"))
			phonebook.search();
	}
	return (0);
}

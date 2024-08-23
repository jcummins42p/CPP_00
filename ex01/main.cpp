/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/23 16:59:15 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	com_add(PhoneBook *phonebook)
{
	static int	index;

	std::cout << "Enter first name: ";
	std::cin >> phonebook->contacts[index].firstname;
	std::cout << "Enter last name: ";
	std::cin >> phonebook->contacts[index].lastname;
	std::cout << "Enter nickname: ";
	std::cin >> phonebook->contacts[index].nickname;
	std::cout << "Enter telephone number: ";
	std::cin >> phonebook->contacts[index].phonenumber;
	index++;
	if (index > 7)
		index = 1;
}

void	com_display(Contact	*contact)
{
	std::cout << "First name: " << contact->firstname << std::endl
		<< "Second name: " << contact->lastname << std::endl
		<< "Nickname: " << contact->nickname << std::endl
		<< "Number: " << contact->phonenumber << std::endl;
}

int	com_search(PhoneBook *phonebook)
{
	int			index;
	std::cout << "Enter index to display: ";
	std::cin >> index;
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index, please try again" << std::endl;
		return (1);
	}
	else
	{
		com_display(&phonebook->contacts[index]);
		return (0);
	}
}

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
			com_add(&phonebook);
		else if (!command.compare("SEARCH"))
		{
			while(com_search(&phonebook))
				;
		}
	}
	return (0);
}

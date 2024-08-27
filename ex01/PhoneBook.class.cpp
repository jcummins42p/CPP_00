/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:20 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 16:42:28 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::display()
{
	for (int i = 0; i <= 43; i++)
		std::cout << "-";
	std::cout	<< std::endl << std::right << "|"
				<< std::setw(7) << "index" << std::setw(3) << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << "|"
				<< std::endl;
	for (int i = 0; i <= 43; i++)
		std::cout << "-";
	std::cout <<std::endl;
	for (int i = 0; i < 8; i++)
		contacts[i].displayline(i);
	for (int i = 0; i <= 43; i++)
		std::cout << "-";
	std::cout <<std::endl;
}

void	PhoneBook::search()
{
	std::string	input;
	int			i = 0;

	display();
	while (std::cout << "Choose an index between 1 and 8 to display contact: "
		&& std::cin >> input)
	{
		if (input.length() == 1 && input >= "1" && input <= "8")
		{
			i = input[0] - '0';
			contacts[i - 1].displayfull();
			return ;
		}
	}
}

void	PhoneBook::add()
{
	std::cout << "Adding to phonebook at index " << index + 1 << std::endl;
	contacts[index].add();
	if (++index > 7)
		index = 0;
}


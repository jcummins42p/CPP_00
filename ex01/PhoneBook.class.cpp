/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:20 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 15:07:32 by jcummins         ###   ########.fr       */
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
	int	i = -1;

	std::cout << "|" << std::setw(7) << "index" << std::setw(3) << "|" << std::setw(15) << "first name" << std::setw(5) << "|" << std::setw(14) << "last name" << std::setw(6) << "|" << std::setw(14) << "nickname" << std::setw(6) << "|" << std::endl;
	while (++i <= 7)
		contacts[i].displayline(i);
}

void	PhoneBook::search()
{
	int			i;

	display();
	while (std::cout << "Choose an index to display: " && std::cin >> i)
	{
		if (std::cin.fail())
			std::cout << "Error: Please use numeric input" << std::endl;
		else if (i < 0 || i > 7)
			std::cout << "Error: Index out of range" << std::endl;
		else
		{
			contacts[i].displayfull();
			return ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::add()
{
	std::cout << "Adding to phonebook at index " << index << std::endl;
	contacts[index].add();
	if (++index > 7)
		index = 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:20 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/26 19:03:18 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	std::cout << "Phone book constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phone book destructor called" << std::endl;
	return ;
}

void	PhoneBook::search()
{
	int			index;
	std::cout << "Enter index to display: ";
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cout << "Invalid input!" << std::endl;
		std::cin.clear();
		std::cin.ignore();
		return ;
	}
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index, please try again" << std::endl;
		return ;
	}
	else
	{
		contacts[index].display();
		return ;
	}
}

void	PhoneBook::add()
{
	std::cout << "Adding to phonebook at index " << index << std::endl;
	contacts[index].add();
	index++;
	if (index > 7)
		index = 1;
}


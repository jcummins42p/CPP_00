/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:34 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 15:00:27 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::displayline(int index)
{
	std::cout << "|" << std::setw(5) << index << std::setw(5)
		<< "|" << std::left << std::setw(20) << firstname
		<< "|" << std::left << std::setw(20) << lastname
		<< "|" << std::left << std::setw(20) << nickname
		<< "|" << std::endl;
}

void	Contact::displayfull(void)
{
	std::cout	<< "First Name: " << firstname << std::endl
				<< "Last Name: " << lastname << std::endl
				<< "Nickname: " << firstname << std::endl
				<< "Phone Number: " << phonenumber << std::endl
				<< "Darkest Secret: " << darksecret << std::endl;
}

void	Contact::add(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter first name: ";
	std::getline(std::cin >> std::ws, firstname);
	std::cout << "Enter last name: ";
	std::getline(std::cin >> std::ws, lastname);
	std::cout << "Enter nickname: ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin >> std::ws, phonenumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin >> std::ws, darksecret);
}

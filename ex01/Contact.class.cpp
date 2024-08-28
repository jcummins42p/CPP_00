/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:34 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/28 17:41:17 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {}

Contact::Contact(const Contact& contact) :
	firstname(contact.firstname),
	lastname(contact.lastname),
	nickname(contact.nickname),
	phonenumber(contact.phonenumber),
	darksecret(contact.darksecret)	{}

Contact& Contact::operator=(const Contact& contact)
{
	if (this != &contact)
	{
		firstname = contact.firstname;
		lastname = contact.lastname;
		nickname = contact.nickname;
		phonenumber = contact.phonenumber;
		darksecret = contact.darksecret;
	}
	return *this;
}

Contact::~Contact(void) {}

std::string	Contact::truncate(std::string str)
{
	if (str.length() > 10)
		return(str.substr(0, 9) + ".");
	else
		return(str);
}

void	Contact::displayline(int index)
{
	std::string tr_first, tr_last, tr_nick;

	std::cout << "|"
		<< std::right << std::setw(5) << index + 1 << std::setw(5) << "|"
		<< std::setw(10) << truncate(firstname) << "|"
		<< std::setw(10) << truncate(lastname) << "|"
		<< std::setw(10) << truncate(nickname) << "|"
		<< std::endl;
}

void	Contact::displayfull(void)
{
	std::cout	<< std::endl << std::left
			<< std::setw(20) << "> First Name: " << firstname << std::endl
			<< std::setw(20) << "> Last Name: " << lastname << std::endl
			<< std::setw(20) << "> Nickname: " << nickname << std::endl
			<< std::setw(20) << "> Phone Number: " << phonenumber << std::endl
			<< std::setw(20) << "> Darkest Secret: " << darksecret << std::endl
			<< std::endl;
}

void	Contact::add(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "> Enter first name: ";
	std::getline(std::cin >> std::ws, firstname);
	std::cout << "> Enter last name: ";
	std::getline(std::cin >> std::ws, lastname);
	std::cout << "> Enter nickname: ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "> Enter phone number: ";
	std::getline(std::cin >> std::ws, phonenumber);
	std::cout << "> Enter darkest secret: ";
	std::getline(std::cin >> std::ws, darksecret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:34 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/26 19:00:33 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void Contact::setFirstName(std::string input)
{
	firstname = input;
}

void Contact::setLastName(std::string input)
{
	lastname = input;
}

void Contact::setNickName(std::string input)
{
	nickname = input;
}

void	Contact::setPhoneNumber(int input)
{
	phonenumber = input;
}

void	Contact::setDarkSecret(std::string input)
{
	darksecret = input;
}

void	Contact::display(void)
{
	std::cout << "First Name: " << firstname << std::endl;
	std::cout << "Last Name: " << lastname << std::endl;
	std::cout << "Nickame: " << firstname << std::endl;
	std::cout << "First Name: " << phonenumber	<< std::endl;
	std::cout << "First Name: " << darksecret << std::endl;
}

void	Contact::add(void)
{
	std::string firstName, lastName, nickName, darkSecret;

	std::cout << "Enter first name: ";
	std::cout.flush();
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::cout.flush();
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::cout.flush();
	std::getline(std::cin, nickName);
	std::cout << "Enter darkest secret: ";
	std::cout.flush();
	std::getline(std::cin, darkSecret);
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setDarkSecret(darkSecret);
}

std::string Contact::getFirstName(void)
{
	return firstname;
}

std::string Contact::getLastName(void)
{
	return lastname;
}

std::string Contact::getNickName(void)
{
	return nickname;
}

int			Contact::getPhoneNumber(void)
{
	return phonenumber;
}

std::string Contact::getDarkSecret(void)
{
	return darksecret;
}

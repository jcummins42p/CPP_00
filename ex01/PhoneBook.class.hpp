/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:32:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/28 16:56:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>
# include <limits>

class	PhoneBook
{
	public:
		PhoneBook( void );
		PhoneBook(const PhoneBook& phonebook);
		PhoneBook& operator=(const PhoneBook&);
		~PhoneBook( void );

		void 	search();
		void	add();
		void	display();
	private:
		Contact	_contacts[8];
		int		_currIndex;
};

#endif

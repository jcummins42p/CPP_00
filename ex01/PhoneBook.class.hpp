/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:32:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/28 15:38:11 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <limits>

class	PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook( void );

		void 	search();
		void	add();
		void	display();
	private:
		Contact	contacts[8];
		int		index;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:33:04 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/28 15:52:58 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>	// required for setw() to format strings
# include <limits>	// required for ignore to work

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		displayfull();
		std::string	truncate(std::string str);
		void		displayline(int index);
		void		add();

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darksecret;
};

#endif

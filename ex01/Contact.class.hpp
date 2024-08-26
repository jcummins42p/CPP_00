/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:33:04 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/26 18:54:31 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		display();
		void		add();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		int			getPhoneNumber();
		std::string	getDarkSecret();

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		int			phonenumber;
		std::string	darksecret;

		void	setFirstName(std::string input);
		void	setLastName(std::string input);
		void	setNickName(std::string input);
		void	setPhoneNumber(int input);
		void	setDarkSecret(std::string input);
};

#endif

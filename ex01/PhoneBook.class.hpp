/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:32:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/27 13:14:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

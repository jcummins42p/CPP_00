/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:32:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/08/26 18:22:57 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook( void );

		void 	search();
		void	add();
	private:
		Contact	contacts[8];
		int		index;
};

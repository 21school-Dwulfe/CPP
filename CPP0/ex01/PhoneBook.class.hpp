/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:03 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 15:03:17 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "main.hpp"

class   PhoneBook
{
	private:
		Contact 	contacts[8];
		std::string	command;
		int			ContactsCount;
		int			id;
		void		PrintContacts();
	public:
		PhoneBook(void);
		~PhoneBook();

		int		AddContact();
		int		SearchContact();
		void	SetCommand(std::string cmd);
};

#endif

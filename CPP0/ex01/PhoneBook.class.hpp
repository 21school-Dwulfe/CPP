/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:03 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/06 14:26:08 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
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

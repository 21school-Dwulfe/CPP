/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:52:50 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 15:46:03 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include "main.hpp"

class Contact
{
	private:
		std::string Name;
		std::string NickName;
		std::string LastName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		Contact(std::string Name,
		std::string NickName,
		std::string LastName,
		std::string PhoneNumber,
		std::string DarkestSecret);
		~Contact();
		std::string GetName() const;
		std::string	GetNickName() const;
		std::string	GetLastName() const;
		std::string	GetPhoneNumber() const;
		std::string	GetDarkestSecret() const;
		void		SetName(std::string newValue);
		void		SetNickName(std::string newValue);
		void		SetLastName(std::string newValue);
		void		SetPhoneNumber(std::string newValue);
		void		SetDarkestSecret(std::string newValue);
};

#endif

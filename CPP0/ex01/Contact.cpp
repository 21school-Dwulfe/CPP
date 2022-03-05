/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:12:42 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 14:35:59 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(){}

Contact::Contact(
		std::string Name,
		std::string NickName,
		std::string LastName,
		std::string PhoneNumber,
		std::string DarkestSecret)
{
	this->Name = Name;
	this->NickName = NickName;
	this->LastName = LastName;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

Contact::~Contact(){}

std::string Contact::GetName() const
{
	return (this->Name);
}

std::string	Contact::GetNickName() const
{
	return (this->NickName);
}
std::string	Contact::GetLastName() const
{
	return (this->LastName);
}
std::string	Contact::GetPhoneNumber() const
{
	return (this->PhoneNumber);
}
std::string	Contact::GetDarkestSecret() const
{
	return (this->DarkestSecret);
}

void	Contact::SetName(std::string newValue)
{
	this->Name = newValue;
}

void	Contact::SetNickName(std::string newValue)
{

	this->NickName = newValue;
}
void	Contact::SetLastName(std::string newValue)
{

	this->LastName = newValue; 
}
void	Contact::SetPhoneNumber(std::string newValue) 
{

	this->PhoneNumber = newValue;
}
void	Contact::SetDarkestSecret(std::string newValue)
{

	this->DarkestSecret = newValue;
}

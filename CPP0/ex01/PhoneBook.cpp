/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:02:47 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/06 14:25:26 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string truncate(std::string str);

PhoneBook::PhoneBook() :ContactsCount(0), id(0){}

PhoneBook::~PhoneBook(){std::cout << std::endl  << "Adios!" << std::endl << std::endl;}

void	PhoneBook::PrintContacts()
{
	int			i;
	
	i = 0;
	std::cout << "_______________________________________" << std::endl;
	std::cout << "|    |          |          |          |" << std::endl;
	std::cout << "| id |   NAME   | LASTNAME | NICKNAME |" << std::endl;
	std::cout << "|____|__________|__________|__________|" << std::endl;
	while (i < this->ContactsCount)
	{
		std::cout
			<< "|    |          |          |          |" << std::endl
			<< "| " << std::to_string(i) << "  |"
			<< truncate(this->contacts[i].GetName())
			<< "|"
			<< truncate(this->contacts[i].GetLastName())
			<< "|"
			<< truncate(this->contacts[i].GetNickName())
			<< "|"
			<< std::endl;
		i++;
			std::cout << "|____|__________|__________|__________|" << std::endl;
	}
}

void	PhoneBook::SetCommand(std::string cmd)
{
	this->command = cmd;
}

int	PhoneBook::AddContact()
{
	int				i;
	Contact			newContact;
	std::string		buff[5];
	std::string 	array[5] = 
	{ 
		"Please, enter Name",
		"Please, enter Nick Name",
		"Please, enter Last Name",
		"Please, enter Phone Number",
		"Please, enter Darkest Secret"
	};
	i = 0;
	while ( i < 5)
	{
		std::cout << array[i] << std::endl;
		if (!std::getline(std::cin, buff[i]) )
			return (1);
		if (!buff[i].empty())
			i++;
	}
	if (this->ContactsCount < 8)
	{
		this->ContactsCount++;
		newContact = Contact(buff[0], buff[1], buff[2], buff[3], buff[4]);
		if (this->id < 8)
			this->contacts[this->id] = newContact;
	}
	if (this->id < 8 && this->ContactsCount == 8)
	{
		this->contacts[this->id].SetName(buff[0]);
		this->contacts[this->id].SetNickName(buff[1]);
		this->contacts[this->id].SetLastName(buff[2]);
		this->contacts[this->id].SetPhoneNumber(buff[3]);
		this->contacts[this->id].SetDarkestSecret(buff[4]);
	}
	this->id++;
	if (this->id == 8)
		this->id = 0;
	return (0);
}

int	PhoneBook::SearchContact()
{
	int			id;
	std::string	id_s;
	size_t		pos;

	this->PrintContacts();
	std::cout << "Please, enter id" << std::endl;
	if (!std::getline(std::cin, id_s))
		return (1);
	id = std::stoi(id_s, &pos, 10);
	if (id >= this->ContactsCount || id < 0)
		std::cout << "Error! Id is out of range" << std::endl;
	else
		std::cout
				<< this->contacts[id].GetName() << std::endl
				<< this->contacts[id].GetNickName() << std::endl
				<< this->contacts[id].GetLastName() << std::endl
				<< this->contacts[id].GetPhoneNumber() << std::endl
				<< this->contacts[id].GetDarkestSecret() << std::endl;
	return (0);
}

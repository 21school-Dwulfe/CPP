/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:51:40 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 17:44:06 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->Name = "Unknown zombie";
    this->announce();
};

Zombie::Zombie(std::string name): Name(name)
{
    this->announce();
}

Zombie::~Zombie()
{
   std::cout << this->Name << " :died" << std::endl;
}

void    Zombie::SetName(std::string name)
{
    this->Name = name;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:51:40 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 17:07:09 by dwulfe           ###   ########.fr       */
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

void    Zombie::announce(void) const
{
    std::cout << this->Name << ": "<< "BraiiiiiiinnnzzzZ..."<< std::endl;
};
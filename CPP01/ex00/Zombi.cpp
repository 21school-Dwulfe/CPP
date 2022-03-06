/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombi.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:51:40 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/06 20:54:23 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombi.hpp"

Zombi::Zombi(std::string name): Name(name)
{
    this->announce();
}

Zombi::~Zombi()
{
   
}

Zombi   *newZombi(std::string name)
{
    return (new Zombi(name));
}
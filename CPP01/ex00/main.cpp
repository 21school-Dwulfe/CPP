/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:33:48 by dwulfe            #+#    #+#             */
/*   Updated: 2022/04/03 20:13:11 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie   *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie shaun = Zombie("Shaun");
    Zombie *a = newZombie("Petya");
    Zombie *party = new Zombie[4];
    randomChump("Vasya");

    delete a;
    delete [] party;

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:33:48 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 17:06:13 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie shaun = Zombie("Shaun");
    Zombie *a = shaun.newZombie("Petya");
    Zombie *party = new Zombie[4];
    shaun.randomChump("Vasya");

    delete a;
    delete [] party;

    return (0);
}
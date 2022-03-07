/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:33:48 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 18:07:41 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *party = Zombie::zombieHorde(666, "Unknown zombie");

    for (int i = 0; i < 666 ; i ++)
    {
        party[i].announce();
    }
    delete [] party;
    return (0);
}
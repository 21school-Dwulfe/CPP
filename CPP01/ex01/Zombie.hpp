/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:33:37 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 17:59:41 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void) const
        {
            std::cout << this->Name << ": "<< "BraiiiiiiinnnzzzZ..."<< std::endl;
        };
        Zombie   *newZombie(std::string name);
        void    randomChump(std::string name) const;
        void    SetName(std::string name);
        static  Zombie* zombieHorde( int N, std::string name );

    private :
        std::string Name;
    
};

#endif

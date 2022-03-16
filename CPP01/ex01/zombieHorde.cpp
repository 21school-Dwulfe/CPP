/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:39:32 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 17:58:55 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

template <class T>
std::string to_string(T param)
{
    std::string str = "";
    std::stringstream ss;
    ss<<param;
    getline(ss, str);
    return str;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arr = new Zombie[N];

    for (int i= 0; i < N; i++)
    {
        arr[i].SetName(name + " " + to_string(i));
    }
    return (arr);
}

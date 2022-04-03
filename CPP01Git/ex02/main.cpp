/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:31:34 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/07 19:35:03 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     var = "HI THIS IS BRAIN";
    std::string     *stringPTR = &var;
    std::string     &stringREF = var;

    std::cout << "memory addres var=  " << &var << "\n"
                << "memory address stringPTR  " << stringPTR << "\n"
                << "memory address stringREF  " << &stringREF << "\n";
     std::cout << "memory value var=  " << var << "\n"
                << "memory value stringPTR  " << *stringPTR << "\n"
                << "memory value stringREF  " << stringREF << "\n";
    return (0);
}
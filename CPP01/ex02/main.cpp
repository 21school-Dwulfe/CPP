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

    return (0);
}
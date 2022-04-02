/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:03:29 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 15:03:37 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int to_int(char const *s, size_t count);

template <class T>
std::string to_string(T param);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:23:12 by dwulfe            #+#    #+#             */
/*   Updated: 2022/03/05 14:38:17 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <sstream>

std::string truncate(std::string str)
{
	int len;

	len = str.length();
    if (len > 10)
        return (str.substr(0, 9) + ".");
    else if (len < 10)
		return (str.append(10 - len, ' '));
	return (str);
}

int to_int(char const *s, size_t count)
{
     size_t i = 0 ;
     if ( s[0] == '+' || s[0] == '-' ) 
          ++i;
     int result = 0;
     while(i < count)
     {
          if ( s[i] >= '0' && s[i] <= '9' )
          {
              result = result * 10  - (s[i] - '0');  
          }
          else
              throw std::invalid_argument("invalid input string");
          i++;
     }
     return s[0] == '-' ? result : -result; 
}

int main(void)
{
	std::string	cmd;
	PhoneBook	book;
	int			result;

	result = 0;
	while (1)
	{
		if (result)
			return(0);
		std::cout << "Please, enter your command" << std::endl;
		if (!std::getline(std::cin, cmd))
			break ;
		book.SetCommand(cmd);
		if (!cmd.compare("ADD"))
			result = book.AddContact();
		if (!cmd.compare("SEARCH"))
			result = book.SearchContact();
		if (!cmd.compare("EXIT"))
			break ;
	}
	return (0);
}

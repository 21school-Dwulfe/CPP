#include "iter.hpp"
#include <iostream>
#include <cstring>
#include <string>
template<typename T>
void    toUpper(T& arr)
{
    arr -= 32;
}

template<typename T>
void    print(T& item)
{
    std::cout << item <<std::endl;
}

template<typename T>
void    print_noendl(T& item)
{
    std::cout << item;
}

int main(void)
{
    char* str = new char[7];
    str[0] = 'r';
    str[1] = 'u';
    str[2] = 's';
    str[3] = 's';
    str[4] = 'i';
    str[5] = 'a';
    str[6] = '\0';
    std::string s(str);
    std::basic_string<char> ch(s);

    for (std::string::iterator i = s.begin() ; i != s.end(); i++)
    {
        ::iter<std::string::iterator>(&i, 1, toUpper);
    }
    
    std::cout << ch << std::endl;
    strcpy(str, "russia");
    int num[] = {1, 2, 3};
    float fl[] = {-1.2, -2.3, -3.4};
    double d[] = {1.2, 2.3, 3.4};


    //strings / chars
    ::iter<char>(str, 6, toUpper);
    ::iter<const char>(s.c_str(), 6, print_noendl);
    //::iter<std::basic_string<char>>(ch, 6, toUpper);
    std::cout << std::endl;
  
    //numbers
    ::iter(num, 3, print);
    ::iter(fl, 3, print);
    ::iter(d, 3, print);


    std::cout << str <<std::endl;
    delete [] str;
    return (0);
}
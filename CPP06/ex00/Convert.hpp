#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>

class Convert
{
private:
    std::string _number;
    std::string _pseudo_result;
public:
    Convert(std::string num);
    Convert(const Convert& convert);
    ~Convert();

    Convert& operator=(const Convert& convert);
    std::string getNumber() const;
    char    toChar() const;
    int     toInt() const;
    float   toFloat() const;
    double  toDouble() const;

    class NonConvertableException: public std::exception
    {
        public:
            const char *what() const throw ()
            {
                std::cerr << "Non convertable exception" << std::endl;
            }
    };
};

std::ostream &operator<< (std::string &out, const Convert& convert);

#endif

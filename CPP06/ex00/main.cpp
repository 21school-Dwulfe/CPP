#include "Convert.hpp"
#include <bits/stdc++.h>
#include <cmath>

std::ostream& operator<<(std::ostream& out, const Convert& convert)
{
    if (!std::isinf(convert.toFloat()) && !std::isnan(convert.toFloat())
        && !isprint(convert.toFloat()))
        out << "char: Non displayable" << std::endl;
    else if (isprint(convert.toChar()))
        out << "char: " << convert.toChar() << std::endl;
    else
        out << "char: impossible" << std::endl;
    if (convert.toFloat() <= INT_MAX && convert.toFloat() >= INT_MIN)
        out << "int: " << convert.toInt() << std::endl;
    else
        out << "char: impossible" << std::endl;
    if (convert.toFloat() - convert.toInt() == 0)
    {
        out << "float: " << convert.toFloat() << ".0f" << std::endl;
        out << "double: " << convert.toDouble() << ".0" << std::endl;
    }
    else
    {
        out << "float: " << convert.toFloat() << "f" << std::endl;
        out << "double: " << convert.toDouble();
    }
    return (out);
}

int main(int argc, char**argv)
{
    if (argc == 2)
    {
        Convert num(argv[1]);

        std::cout << num << std::endl;
    }
    return (0);
}

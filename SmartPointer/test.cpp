#include "SmartPointer.hpp"

int main()
{
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    SmartPtr<double> ptr2(new double());
    *ptr2 = 20.4586;
    std::cout << *ptr<<std::endl;
    std::cout << *ptr2<< std::endl;
 
    return 0;
}

#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t ptr)
{
    return (reinterpret_cast<Data *>(ptr));
}

int main(void)
{
    Data rub = {"Rubles", 84};

    std::cout << "Before serialization:\n" << "Address:"
              <<&rub << std::endl;
    std::cout << "Ticker: " << rub.ticker << std::endl
              << "Price: " << rub.price << std::endl;
    
    uintptr_t ptr = serialize(&rub);
    
    std::cout << "Data is serialized" << std::endl;
    std::cout << ptr << std::endl;
    
    Data* deserialized_ptr = deserialize(ptr);
    
    std::cout << "uintptr_t is deserialized" << std::endl;
    std::cout << "After deserialization:\n" << "Address:"
              << deserialized_ptr << std::endl;
    std::cout << "Ticker: " << deserialized_ptr->ticker << std::endl
              << "Price: " << deserialized_ptr->price << std::endl;
    return (0);
}
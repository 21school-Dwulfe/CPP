#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

// template<typename T>
// void    swap(T* one, T* two)
// {
//     T* tmp;

//     tmp = one;
//     *one = *two;
//     *two = *temp;
// }

template<typename T>
void    swap(T& one, T& two)
{
    T tmp;

    tmp = one;
    one = two;
    two = tmp;
}

template<typename T>
T const&  min(const T& one, const T& two)
{
    return (one < two ? one : two);
}

template<typename T>
T  const& max(const T& one, const T& two)
{
    return (one > two ? one : two);
}

#endif

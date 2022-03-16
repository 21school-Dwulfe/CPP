#ifndef SMARTPOINTER_HPP
#define SMARTPOINTER_HPP

#include <iostream>


template <class T>
class SmartPtr {
    T* ptr;
public:
    explicit SmartPtr(T* p = NULL);//{ptr = p;}
    ~SmartPtr();
    T& operator*();
    T* operator->();
};


template <class T>
SmartPtr<T>::SmartPtr(T* p)
{
    ptr = p;
}
 
template <class T>
SmartPtr<T>::~SmartPtr() 
{
    delete (ptr);
}

 
template <class T>
inline T& SmartPtr<T>::operator*()
{ 
    return *ptr;
}

 
template <class T>
T* SmartPtr<T>::operator->() 
{ 
    return ptr;
}

#endif

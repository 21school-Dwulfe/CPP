#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
    private:
        T*          _items;
        unsigned int _num_elemets;
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array<T>& array);
        ~Array();

        Array<T>& operator=(const Array<T>& array);
        T& operator[](unsigned int index);
        
        void            setItems(T* newItems, unsigned int num);
        T*              getItems()const;
        unsigned int    size()const;

        class OutOfRange : public std::exception
        {
            public:
                const char* what () const throw ();
        };
};

template <typename T>
Array<T>::Array(void): _num_elemets(0), _items(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n) :_num_elemets(n)
{
    if (n > 0)
        _items = new T[n];
    else
        _items = NULL;
}

template <typename T>
Array<T>::Array(const Array<T>& array)
{
    _num_elemets = 0;
    _items = 0;
    *this = array;
}

template <typename T>
Array<T>::~Array()
{
    if (_num_elemets > 0)
        delete[] _items;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& array)
{
    if (&array != this)
        setItems(array._items, array.size());
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _num_elemets)
        throw OutOfRange();
    else
        return (_items[index]);
}

template <typename T>
unsigned int   Array<T>::size()const
{
    return (_num_elemets);
}

template <typename T>
T*   Array<T>::getItems(void) const
{
    return (_items);
}

template <typename T>
void    Array<T>::setItems(T* newItems, unsigned int num)
{
    if (newItems && num)
    {
        if (_num_elemets > 0)
            delete[] _items;
        _items = new T[num];
        for (unsigned int i = 0; i < num; i++)
        {
            _items[i] = newItems[i];
        }
        _num_elemets = num;
    }
}

template< typename T>
const char *Array<T>::OutOfRange::what() const throw() 
{
    return ("Exception: Index is out of range.");
}

#endif

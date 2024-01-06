#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <vector>

template <typename T>

typename T::iterator easyfind(T& array, int n)
{
    return std::find(array.begin(),array.end(), n);
}

class ElementNotFound : public std::exception
{
    public:
        const char * what() const throw()
        {
            return "Error : Elements not found !\n";
        }
};

#endif
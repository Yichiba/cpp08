#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>

class MutantStack : public std::stack <T>
{

        std::stack<T> stack;
    public:
    MutantStack(){
    }
    MutantStack( MutantStack& old){
        *this = old;
    }
    MutantStack&     operator=(MutantStack& obj){
        std::stack<T>::operator=(obj);
        return *this;
    }
    ~MutantStack(){
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){
        return std::stack<T>::c.begin();
    }
    iterator end(){
        return std::stack<T>::c.end();
    }
};


#endif
#include "Span.hpp"
#include <cstdarg>


Span::Span(){}
Span::~Span(){
}

Span::Span(unsigned int n)
{
    N = n;
}

void Span::addNumber(int n){
    static unsigned int index;
    if(index < N)
        sp.push_back(n);
    else
        throw Span::SpanIsFull();
    index++;
    
}

void Span::improvedAddNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end){
    
    while(begin != end){
        addNumber(*begin);
        begin++;
    }
}

Span::Span(const Span & old){
    *this = old;
}

Span& Span::operator=(const Span& other){
    N = other.N;
    return *this;
}

const std::vector<int>& Span::getsp() const {
    return sp;
}
int Span::getN(){
    return N;
}

int Span::longestSpan(){
    int min = *(min_element(sp.begin(),sp.end()));
    int max = *(max_element(sp.begin(),sp.end()));
    return(max - min);
}
int Span::shortestSpan(){
    int min = INT_MAX;
    std::sort(sp.begin(),sp.end());
    for (unsigned long i = 0 ;i < sp.size()-1;i++) 
        {
            if(min > std::abs(sp.at(i)- sp.at(i+1)))
                min = std::abs(sp.at(i)- sp.at(i+1));
        }
	return min;
}
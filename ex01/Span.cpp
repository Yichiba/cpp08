#include "Span.hpp"
#include "Span.hpp"


Span::Span(){}
Span::~Span(){
}

Span::Span(unsigned int n){
    N = n;
}
void    Span::addNumber(int n){
    static unsigned int index;
    if(index < N)
         sp.push_back(n);
    else
        throw Span::SpanIsFull();
    
}


std::vector<int>&    Span::getsp(){
    return sp;
}
int    Span::getN(){
    return N;
}

int     Span::longestSpan(){
    int min = *(min_element(sp.begin(),sp.end()));
    int max = *(max_element(sp.begin(),sp.end()));
    return(max - min);
}
int     Span::shortestSpan(){
    int min = INT_MAX;
    std::sort(sp.begin(),sp.end());
    for (unsigned long i = 0 ;i < sp.size()-1;i++) 
        {
            if(min > std::abs(sp.at(i)- sp.at(i+1)))
                min = std::abs(sp.at(i)- sp.at(i+1));
        }
	return min;
}


std::ostream& operator<<(std::ostream& os,Span& sp){

        sp.getsp();
    return os;
}
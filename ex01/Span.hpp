#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>



class Span{
    unsigned int N;
    std::vector<int> sp;    
    public:
        Span();
        Span( unsigned int n);
        Span(Span& old);
        Span& operator=(Span& other);
        ~Span();
        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        std::vector<int>&   getsp();
        int   getN();

        class SpanIsFull : public std::exception{
            public:
                const  char* what() const throw(){
                    return "Error : Span is Fuuuuuul\n";
                }
        };
};
 
std::ostream& operator<<(std::ostream& os,Span& sp);

#endif
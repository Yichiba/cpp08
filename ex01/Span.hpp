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
        Span(const Span & old);
        Span& operator=(const Span& other);
        ~Span();
        void    addNumber(int num);
        void    improvedAddNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end);
        int     shortestSpan();
        int     longestSpan();
        const std::vector<int>&   getsp() const ;
        int   getN();

        class SpanIsFull : public std::exception{
            public:
                const  char* what() const throw(){
                    return "Error : Span is Fuuuuuul\n";
                }
        };
};
#endif
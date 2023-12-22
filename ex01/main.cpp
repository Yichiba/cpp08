
#include "Span.hpp"


int main()
{
    try{ 
            Span sp(5);
            sp.addNumber(6);
            sp.addNumber(10);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(15);
            for (int i = 0; i < 5; i++)
                std::cout << sp << std::endl;
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            return 0;
        }
    catch( std::exception& e){
        std::cout << e.what();
    }
}
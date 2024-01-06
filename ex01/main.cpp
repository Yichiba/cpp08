#include "Span.hpp"

int main()
{
    try
    { 
        std::vector<int> arr;
        arr.push_back(8);
        arr.push_back(34);
        arr.push_back(485);
        arr.push_back(448);
        arr.push_back(18);
        arr.push_back(7);
        
        Span sp = Span(6);
        sp.improvedAddNumber(arr.begin(),arr.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
    catch( std::exception& e)
    {
        std::cout << e.what();
    }
}
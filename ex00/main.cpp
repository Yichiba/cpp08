#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> myVector ;
        myVector.push_back(11);
        myVector.push_back(85);
        myVector.push_back(1994);
        myVector.push_back(1845);
        myVector.push_back(16);

        std::vector<int>::iterator result = easyfind(myVector, 1845);
        if (result != myVector.end())
            std::cout << "Element found: " << *result << std::endl;
        else
            throw   ElementNotFound();
    }
    catch (std::exception& e){
        std::cout << e.what();
    }
    return 0;
}

#include <iostream>
#include <cstdlib>
#include "boost/format.hpp"

using namespace std; 

int main (int argc, char** argv){

    std::cout << "Hello" << std::endl;

    if(const char* env_p = std::getenv("MY_VAR"))
        std::cout << "Your PATH is: " << env_p << '\n';
    else
        std::cout << "Attention ma variable MY_VAR n'est pas définie" << std::endl;
    
    std::string users[] = {"joe", "bill", "bob"};
    for (int i = 0 ; i < 3 ; i++)
        std::cout << "  " << (boost::format("Bonjour utilisateur n°%1% nommé %2%.") % i % users[i]).str() << std::endl;
}
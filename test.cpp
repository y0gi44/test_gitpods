#include <iostream>
#include <cstdlib>

using namespace std; 

int main (int argc, char** argv){

    std::cout << "Hello" << std::endl;

    if(const char* env_p = std::getenv("MY_VAR"))
        std::cout << "Your PATH is: " << env_p << '\n';
    else
        std::cout << "Attention ma variable MY_VAR n'est pas définie" << std::endl;
}
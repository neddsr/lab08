#include <print.hpp>
#include <fstream>

int main(int, char**) 
{
    std::ofstream file("/home/logs/log.txt");
    print(std::string("hello"), file);
    return 0;
}

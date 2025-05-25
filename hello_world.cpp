#include <iostream> // это база
#include <string>   // to use string variables

int
main()
{
  std::string name;
  std::cout << "Hello world";
  std::cout << "What is your name?";
  std::cin >> name;
  std::cout << "Hello world from " << name;
}

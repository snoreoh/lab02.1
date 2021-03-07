#include <iostream>
#include <string>

int main(int argc, char** argv)
{
  std::string str;
  std::cout << "Your name:";
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>

  return 1;
}

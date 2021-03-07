#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string str;
  std::cout << "Your name:";
<<<<<<< HEAD
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
=======
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>
>>>>>>> changed comments

  return 1;
}

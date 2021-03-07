#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string str;
  std::cout << "Your name:";
<<<<<<< ours
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>
=======
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
>>>>>>> theirs

  return 1;
}

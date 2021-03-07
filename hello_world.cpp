#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string str;
  std::cout << "Your name:";
<<<<<<< HEAD
<<<<<<< ours
  getline(std::cin, str); 
  std::cout<< "Hello world  from "<< str <<endl; // Вывод должен выглядеть: Hello world for <name>
=======
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
>>>>>>> theirs
=======
  getline(std::cin, str);
  std::cout << "Hello world  from " << str
            << endl; // out'll be: Hello world <name>
>>>>>>> patch2

  return 1;
}
